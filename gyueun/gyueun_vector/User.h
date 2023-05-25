#pragma once
#include <iostream>
#include <string>

using namespace std;

class User
{

protected:
	string id, password, name, idNum;
	int userType;

public:
	User();
	User(int, string, string, string, string);
	string getUserId();

};

