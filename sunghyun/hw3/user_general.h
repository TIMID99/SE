#pragma once
#include "user.h"
#include <string>

class GeneralUser : public User {
public:
	GeneralUser(int, std::string, std::string, std::string, std::string);
};
