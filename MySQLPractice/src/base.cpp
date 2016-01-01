#include <iostream>

#include "mysql.h"
#include "my_global.h"

using namespace std;

int main()
{
	char* name	= "fuimaz";
	char* pwd	= "fuimazv8p";

	MYSQL* conn = mysql_init(NULL);
	if (conn == NULL)
	{
		cout << "mysql init failed \n";
		mysql_close(conn);
		return 0;
	}

	if (mysql_real_connect(conn, NULL, name, pwd, NULL, 
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