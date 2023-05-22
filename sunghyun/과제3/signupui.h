#pragma once

#include <fstream>
#include "signUp.h"
#include "userdb.h"


class SignUpUI {
	SignUp* signupControl;
public:
	SignUpUI(SignUp*);
	User startInterface(std::ifstream&, std::ofstream&);
	void signUp(User, UserDB*);
};
