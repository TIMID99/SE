#pragma once
#include "login.h"

class LoginUI {
	User loginUser;
	Login* loginControl;
public:
	LoginUI(Login*);
	void login(std::ifstream&, std::ofstream&);
};
