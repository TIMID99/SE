#pragma once
#include <string>

class Session {
    std::string sessionId;
public:
    Session(std::string);
    std::string getSessionId();    
};