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
		Company* newCompany = new Company();
		newUser = newCompany;
	}
	else if (userType == 2) {
		GeneralUser* newGeneraluser = new GeneralUser();
		newUser = newGeneraluser;
	}

	if(this->signUp(newUser)) {
		out_fp << userType << " " << name << " " << idNum << " " << id << " " << password << std::endl; 
	}
}

bool SignUpUI::signUp(User* newUser) {
	return this->signupControl->addUserRequest(newUser);
}

