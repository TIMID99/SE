#pragma once

#include "Logout.h"
#include <fstream>

class Logout;

class LogoutUI {
    Logout* logoutControl;
public:
    LogoutUI(Logout*);
    void startInterface(std::ofstream&);
    void logOut(std::string);
};