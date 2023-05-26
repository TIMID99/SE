#pragma once

#include "DeleteUserUI.h"
#include <string>

class DeleteUserUI;

class DeleteUser {
    DeleteUserUI* deleteUserUI;
public:
    DeleteUser();
    void deleteUserRequest(std::string);
    DeleteUserUI* getInterfaceInstance();
};
