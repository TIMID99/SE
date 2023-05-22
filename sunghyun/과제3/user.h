#pragma once

#include <string>

class User {
	std::string id, passwd, name, idNum;
	int userType;
public:
	User();
	User(std::string, std::string, std::string, std::string, int);
	std::string getUserId();
};
