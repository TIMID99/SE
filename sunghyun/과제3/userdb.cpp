#include "userdb.h"

UserDB::UserDB() {
	ownedUserCollection = UserCollection();
}

void UserDB::addNewUser(User user) {
	ownedUserCollection.addNewUser(user);
}

void UserDB::deleteUser(User user) {
	ownedUserCollection.deleteUser(user);
}

User UserDB::findUser(User user) {
	return ownedUserCollection.find(user);
}
