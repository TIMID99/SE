#include "SessionCollection.h"

SessionCollection* SessionCollection::isInstance = nullptr;

SessionCollection::SessionCollection() {
    sessionList = std::vector<Session*>();
}

// SessionCollection의 생성자는 한 번만 호출
// 생성되어 있는 instance를 반환
SessionCollection* SessionCollection::getInstance() {
    if(isInstance == nullptr) {
        isInstance = new SessionCollection();
    }
    return isInstance;
}

// User id를 받아 session 생성
void SessionCollection::createSession(std::string id) {
    Session* newSession = new Session(id);
    sessionList.push_back(newSession);
}

// user id와 일치하는 session 삭제
void SessionCollection::deleteSession(std::string id) {
    for(int i = 0; i < sessionList.size(); i++){
        if(sessionList[i]->getSessionId() == id) {
            sessionList.erase(sessionList.begin()+i);
        }
    }
}

// 마지막으로 로그인한 회원의 id 반환
std::string SessionCollection::getLastSession() {
    return sessionList[sessionList.size()-1]->getSessionId();
}

