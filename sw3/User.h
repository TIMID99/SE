#pragma once

#include <string>

class User {
	std::string id, password, name, idNum;
	int userType;
public:
	User();
	User(int, std::string, std::string, std::string, std::string);
	std::string getId();
    std::string getPassword();
};
