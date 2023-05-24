#pragma once
#include <iostream>
#include <string>

using namespace std;

class User
{

private:
    std:: string id, passwd, name, idNum;
	int userType;

public:
	User();
	User(std::string, std::string, std::string, std::string, int);
	std::string getUserId();

};

