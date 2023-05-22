#include "deleteUser.h"

void DeleteUser::deleteUser(UserDB* userdb, User user) {
	userdb->deleteUser(user);
}