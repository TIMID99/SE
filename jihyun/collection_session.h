//
//  collection_session.h
//  실습_state_machine
//
//  Created by 정지현 on 2023/05/26.
//

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

