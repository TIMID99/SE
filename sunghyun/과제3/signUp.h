#pragma once

class SignUp;
class UserDB;
class SignUpUI;

#include "signupui.h"
#include "userdb.h"

class SignUp {
	SignUpUI* signUpUI;
	UserDB* userdb;
public:
	SignUp(UserDB*);
	void onLoad(std::ifstream&, std::ofstream&);
	void addNewUser(UserDB*, User);
};
