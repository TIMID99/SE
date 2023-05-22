#include "signupui.h"
#include <iostream>
#include <fstream>

SignUpUI::SignUpUI(SignUp* signup) : signupControl(signup) {}

User SignUpUI::startInterface(std::ifstream& in_fp, std::ofstream& out_fp) {
	std::string id, passwd, name, idNum;
	int userType;
	in_fp >> userType >> name >> idNum >> id >> passwd;


	out_fp << "1.1. 회원가입\n";
	out_fp << userType << " " << name << " " << idNum << " " << id << " " << passwd << "\n";

	return User(id, passwd, name, idNum, userType);
}

void SignUpUI::signUp(User user, UserDB* userdb) {
	signupControl->addNewUser(userdb, user);
}