#pragma once

#include "Logout.h"
#include <fstream>

class Logout;

class LogoutUI {
    Logout* logoutControl;
public:
    LogoutUI(Logout*);
    void startInterface(std::ofstream&); 
    void logOut(std::string); // 마지막으로 로그인한 id로 호출
};