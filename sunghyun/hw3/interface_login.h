#pragma once
#include "control_login.h"
#include <fstream>

class Login;

class LoginUI {
	Login* loginControl;
public:
	LoginUI(Login*);
	void startInterface(std::ifstream&, std::ofstream&);
    bool login(std::string, std::string);
};
