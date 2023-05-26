#pragma once
#include <string>

class Session {
    std::string sessionId; // user의 id와 동일한 정보를 갖는다.
public:
    Session(std::string);
    std::string getSessionId(); // sessionId 반환  
};