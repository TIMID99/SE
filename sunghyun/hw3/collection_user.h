#pragma once

#include "user.h"
#include <vector>

class UserCollection {
	std::vector<User*> userList;
	static UserCollection* isInstance;
public:
	bool addNewUser(User*);
	void deleteUser(std::string);
    bool validate(std::string, std::string);
    std::string getLastRegisteredId();
	static UserCollection* getInstance();
};
