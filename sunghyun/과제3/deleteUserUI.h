#pragma once

#include "deleteUser.h"
#include <fstream>

class DeleteUserUI {
	DeleteUser* deleteUserControl;
public:
	DeleteUserUI(DeleteUser*);
	void deleteUserInsert(std::ifstream&, std::ofstream&, UserDB*);
};
