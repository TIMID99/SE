#include "interface_signup.h"
#include "control_signup.h"
#include "company.h"
#include "user_general.h"
#include <iostream>
#include <fstream>

SignUpUI::SignUpUI(SignUp* signup)
    : signupControl(signup) {}


void SignUpUI::startInterface(std::ifstream& in_fp, std::ofstream& out_fp) {
	int userType;
	std::string id, password, name, idNum;
	in_fp >> userType >> name >> idNum >> id >> password;

	User* newUser;

	if(userType == 1){
		Company* newCompany = new Company(userType, id, password, name, idNum);
		newUser = newCompany;
	}
	else if (userType == 2) {
		GeneralUser* newGeneraluser = new GeneralUser(userType, id, password, name, idNum);
		newUser = newGeneraluser;
	}


	if(this->signUp(newUser)) {
		out_fp << "1.1. 회원가입\n";
		out_fp << "> " << userType << " " << name << " " << idNum << " " << id << " " << password << std::endl;
		out_fp << std::endl;
	}
}

bool SignUpUI::signUp(User* newUser) {
	return this->signupControl->addUserRequest(newUser);
}

