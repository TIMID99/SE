//
//  collection_session.cpp
//  실습_state_machine
//
//  Created by 정지현 on 2023/05/26.
//

#include <stdio.h>
#include "collection_session.h"

SessionCollection* SessionCollection::isInstance = nullptr;

SessionCollection::SessionCollection() {
    sessionList = std::vector<Session*>();
}

SessionCollection* SessionCollection::getInstance() {
    if(isInstance == nullptr) {
        isInstance = new SessionCollection();
    }
    return isInstance;
}

void SessionCollection::createSession(std::string id) {
    Session* newSession = new Session(id);
    sessionList.push_back(newSession);
}

void SessionCollection::deleteSession(std::string id) {
    for(int i = 0; i < sessionList.size(); i++){
        if(sessionList[i]->getSessionId() == id) {
            sessionList.erase(sessionList.begin()+i);
        }
    }
}

std::string SessionCollection::getLastSession() {
    return sessionList[sessionList.size()-1]->getSessionId();
}
