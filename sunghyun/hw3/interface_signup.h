#pragma once

#include <fstream>
#include "user.h"

class SignUp;

class SignUpUI {
	SignUp* signupControl;
public:
	SignUpUI(SignUp*);
	void startInterface(std::ifstream&, std::ofstream&);
	bool signUp(User*);
};
