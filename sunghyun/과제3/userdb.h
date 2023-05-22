#pragma once

#include "userCollection.h"

class UserDB {
	UserCollection ownedUserCollection;
public:
	UserDB();
	void addNewUser(User);
	void deleteUser(User);
	User findUser(User);
};
