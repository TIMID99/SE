#include "user_general.h"

GeneralUser::GeneralUser(int userType, std::string id, std::string password, std::string name, std::string idNum)
	: User(userType, id, password, name, idNum) {}

