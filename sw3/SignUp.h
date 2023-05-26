#pragma once

#include "UserCollection.h"
#include <fstream>

class SignUpUI;

class SignUp {
	SignUpUI* signUpUI;

public:
	SignUp();
	SignUpUI* getInterfaceInstance(); // boundary 반환
	bool addUserRequest(User*); // boundary가 입력정보를 보냄
};
