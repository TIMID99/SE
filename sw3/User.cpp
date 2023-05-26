#include "User.h"

User::User() {
	userType = 0;
}

User::User(int userType, std::string id, std::string password, std::string name, std::string idNum)
	: userType(userType), id(id), password(password), name(name), idNum(idNum) {}

// user id를 반환
std::string User::getId() {
	return id;
}

// user password를 반환
std::string User::getPassword() {
    return password;
}

// General user 이름 or Company 이름 반환
std::string User::getName() {
	return name;
}

// General user 주민번호 or Comapny 사업자번호 반환
std::string User::getIdNum() {
	return idNum;
}
