#include "collection_session.h"

SessionCollection::SessionCollection() {}

SessionCollection* SessionCollection::getInstance() {
    if(isInstance == nullptr) {
        isInstance = new SessionCollection();
    }
    return isInstance;
}

void SessionCollection::createSession(std::string id) {
    Session* newSession = new Session(id);
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

