#pragma once

#include <string>
#include <fstream>

class User {
	std::string id, password, name, idNum;
	int userType;
public:
	User();
	User(int, std::string, std::string, std::string, std::string);
	std::string getId();
	std::string getName();
    std::string getPassword();
	std::string getIdNum();
	virtual void applyStatics(std::ofstream&);
};
