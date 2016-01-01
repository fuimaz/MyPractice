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
		0, NULL, 0))
	{
		cout << ""
	}
}