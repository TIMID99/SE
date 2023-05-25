#pragma once
#include "interface_login.h"
#include "user.h"

class LoginUI;

class Login {
    LoginUI* loginUI;
public:
	Login();
    LoginUI* getInterfaceInstance();
    bool loginRequest(std::string, std::string);
};
