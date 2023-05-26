#include "Company.h"

Company::Company(int userType, std::string id, std::string password, std::string name, std::string idNum)
	: User(userType, id, password, name, idNum) {}