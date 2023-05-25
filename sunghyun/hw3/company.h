#pragma once
#include "user.h"
#include <string>

class Company : public User {
public:
	Company(int, std::string, std::string, std::string, std::string);
};
