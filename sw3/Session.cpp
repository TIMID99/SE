#include "Session.h"

// session 생성자
Session::Session(std::string newSessionId)
    : sessionId(newSessionId) {}

// session id(user id와 동일) 반환
std::string Session::getSessionId() {
    return sessionId;
}


