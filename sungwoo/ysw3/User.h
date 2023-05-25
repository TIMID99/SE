#pragma once
#include <string>

using namespace std;

class User {
	string id, password, name, idNum;
	
public:
	User();
	User(int, string, string, string, string);
	string getid();
};