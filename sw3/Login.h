#pragma once
#include "LoginUI.h"
#include "user.h"

class LoginUI;

class Login {
    LoginUI* loginUI;
public:
	Login();
    LoginUI* getInterfaceInstance(); // private member의 login boundary 반환
    bool loginRequest(std::string, std::string); // boundary가 control로 입력 정보 보냄
};
