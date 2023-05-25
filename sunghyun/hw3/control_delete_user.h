#pragma once

#include "interface_delete_user.h"
#include <string>

class DeleteUserUI;

class DeleteUser {
    DeleteUserUI* deleteUserUI;
public:
    DeleteUser();
    void deleteUserRequest(std::string);
    DeleteUserUI* getInterfaceInstance();
};
