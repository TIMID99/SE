#pragma once

#include "DeleteUser.h"
#include <string>
#include <fstream>

class DeleteUser;

class DeleteUserUI {
    DeleteUser* deleteUserControl;
public:
	void deleteUser(std::string);
    void startInterface(std::ofstream&);
    DeleteUserUI(DeleteUser*);
};
