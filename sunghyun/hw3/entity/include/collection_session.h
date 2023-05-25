#pragma once
#include "session.h"
#include <vector>

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