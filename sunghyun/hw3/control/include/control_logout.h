#pragma once
#include "interface_logout.h"
#include <string>

class LogoutUI;

class Logout {
    LogoutUI* logoutUI;
public:
    void logOutRequest(std::string);
    LogoutUI* getInterfaceInstance();
};