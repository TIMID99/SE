#include "signUp.h"

SignUp::SignUp(UserDB* userdb) {
	this->userdb = userdb;
	signUpUI = new SignUpUI(this);
}

void SignUp::addNewUser(UserDB* userdb, User user) {
	userdb->addNewUser(user);
}

void SignUp::onLoad(std::ifstream& in_fp, std::ofstream& out_fp) {
	User newUser = signUpUI->startInterface(in_fp, out_fp);
	signUpUI->signUp(newUser, userdb);
}