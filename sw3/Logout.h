#pragma once
#include "LogoutUI.h"
#include <string>

class LogoutUI;

class Logout {
    LogoutUI* logoutUI;
public:
    Logout();
    void logOutRequest(std::string);
    LogoutUI* getInterfaceInstance();
};