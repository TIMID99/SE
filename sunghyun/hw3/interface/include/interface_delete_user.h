#pragma once

#include "control_delete_user.h"
#include <fstream>

class DeleteUser;

class DeleteUserUI {
    DeleteUser* deleteUserControl;
public:
	void deleteUserInsert(std::ofstream&);
    void startInterface(std::ofstream&);
    DeleteUserUI(DeleteUser*);
};
