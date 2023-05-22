#include "userCollection.h"

UserCollection::UserCollection() {
	User* ownedUser = new User[100];
	this->ownedUser = ownedUser;
	userNum = 0;
}

void UserCollection::addNewUser(User user) {
	ownedUser[userNum++] = user;
}

void UserCollection::deleteUser(User user) {
	for (int i = 0; i < userNum; i++) {
		if (ownedUser[i].getUserId() == user.getUserId()) {
			std::swap(ownedUser[i], ownedUser[userNum - 1]);
			userNum--;
		}
	}
}

User UserCollection::find(User user) {
	for (int i = 0; i < userNum; i++) {
		if (ownedUser[i].getUserId() == user.getUserId()) {
			// User Found!
			return user;
		}
	}
}

int UserCollection::size() {
	return userNum;
}
