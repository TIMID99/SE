#include "Session.h"

Session::Session(std::string newSessionId)
    : sessionId(newSessionId) {}

std::string Session::getSessionId() {
    return sessionId;
}


