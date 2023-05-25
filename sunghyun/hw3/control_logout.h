#pragma once
#include "interface_logout.h"
#include <string>

class LogoutUI;

class Logout {
    LogoutUI* logoutUI;
public:
    Logout();
    void logOutRequest(std::string);
    LogoutUI* getInterfaceInstance();
};