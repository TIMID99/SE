#include "User.h"

class UserCollection {
	User* ownedUser;
	int userNum;

public:
	UserCollection();
	void addNewUser(User);
	void deleteUser(User);
	User find(User);
	int size();
};
