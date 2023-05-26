#pragma once
#include "LogoutUI.h"
#include <string>

class LogoutUI;

class Logout {
    LogoutUI* logoutUI;
public:
    Logout();
    void logOutRequest(std::string); // boundary가 control로 입력 정보 보냄
    LogoutUI* getInterfaceInstance(); // logout boundary 반환
};