#pragma once

#include "UserCollection.h"
#include <fstream>
class SignUpUI;
class SignUp {
	SignUpUI* signUpUI;

public:
	SignUp();
	SignUpUI* getInterfaceInstance();
	bool addUserRequest(User*);
};
