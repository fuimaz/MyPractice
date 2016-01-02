#include <iostream>
#include <string>

#ifdef _WIN32
#include "mysql.h"
#include "my_global.h"
#elif
#include "mysql/mysql.h"
#include "mysql/my_global.h"
#endif

using namespace std;

int main()
{
	string name("fuimaz");
	string passwd("fuimazv8p");

	MYSQL* conn = mysql_init(NULL); 
	if (conn == NULL)
	{
		cout << "mysql init failed \n";
		mysql_close(conn);
		return 0;
	}

	if (mysql_real_connect(conn, NULL, name.c_str(), passwd.c_str(), NULL, 
		0, NULL, 0) == NULL)
	{
		cout << "mysql connect failed " << mysql_errno(conn) 
			<< endl;
		mysql_close(conn);
		return 0;
	}

	char* create_db = "CREATE DATABASE IF NOT EXISTS test";
	if (mysql_query(conn, create_db))
	{
		cout << "mysql insert failed " << mysql_errno(conn) 
			<< endl;
		mysql_close(conn);
		return 0;
	}

	mysql_close(conn);
	return 0;
}