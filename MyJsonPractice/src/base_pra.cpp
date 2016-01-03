#include <iostream>
#include <string>

#include "json.h"
#include "reader.h"

using namespace std;

int main()
{
	Json::Reader jreader;
	string	value("{\"uploadid\": \"UP000000\",\"code\": 100,\"msg\": \"\",\"files\": \"\"}");
	Json::Value	jvalue;
	
	if (jreader.parse(value, jvalue))
	{
		string upload_id = jvalue["upload_id"].asString();
		int code = jvalue["code"].asInt();
		cout << upload_id << code << endl;
	}

	return 0;
}