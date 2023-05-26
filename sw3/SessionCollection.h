#pragma once
#include "Session.h"
#include <vector>

// singleton으로 구현
class SessionCollection {
    std::vector<Session*> sessionList;
    static SessionCollection* isInstance;
    SessionCollection();

public:
    static SessionCollection* getInstance();
    void createSession(std::string);
    void deleteSession(std::string);
    std::string getLastSession();
};