#pragma once

#include "userdb.h"

class Login {
	UserDB userdb;
public:
	Login();
	void validate();
};
