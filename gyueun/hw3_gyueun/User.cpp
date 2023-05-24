#include "User.h"
#include <iostream>

User::User() {
	userType = 0;
}

User::User(std::string id, std::string passwd, std::string name, std::string idNum, int userType)
	: id(id), passwd(passwd), name(name), idNum(idNum), userType(userType) {}

std::string User::getUserId() {
	return id;
}