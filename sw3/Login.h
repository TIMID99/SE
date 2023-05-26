#pragma once
#include "LoginUI.h"
#include "user.h"

class LoginUI;

class Login {
    LoginUI* loginUI;
public:
	Login();
    LoginUI* getInterfaceInstance();
    bool loginRequest(std::string, std::string);
};
