//
//  session.cpp
//  실습_state_machine
//
//  Created by 정지현 on 2023/05/26.
//


#include "session.h"

Session::Session(std::string newSessionId)
    : sessionId(newSessionId) {}

std::string Session::getSessionId() {
    return sessionId;
}

