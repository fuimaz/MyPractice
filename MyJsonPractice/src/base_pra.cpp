//#include <iostream>
//#include <string>
//
//#include "json.h"
//#include "reader.h"
//
//using namespace std;
//
//int main()
//{
//	Json::Reader jreader;
////	string	value("{\"uploadid\": \"UP000000\",\"code\": 100,\"msg\": \"\",\"files\": \"\"}");
//	string value;
//	Json::Value	jvalue;
//	
//	if (jreader.parse(value, jvalue))
//	{
//		string upload_id = jvalue["upload_id"].asString();
//		int code = jvalue["code"].asInt();
//		cout << upload_id << code << endl;
//	}
//
//	return 0;
//}

#include "json.h"
#include <string>
#include <stdlib.h>
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream is;
	is.open ("./JsonText", std::ios::binary );
	Json::Reader reader;
	Json::Value root;
	if(reader.parse(is,root))   ///root保存整个Json对象的value
	{
		if(!root["name"].isNull())
		{
			cout<<root["name"].asString()<<endl;    ///读取元素
			Json::Value arrayObj = root["array"];
			for(int i=0 ; i< arrayObj.size() ;i++)
			{
				cout<<arrayObj[i].asString()<<endl;
			}
		}
	}
	return 0;
}