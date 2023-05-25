#include "control_logout.h"
#include "collection_session.h"

Logout::Logout() {
    logoutUI = new LogoutUI(this);
}

void Logout::logOutRequest(std::string id) {
    SessionCollection::getInstance()->deleteSession(id);
}

LogoutUI* Logout::getInterfaceInstance() {
    return logoutUI;
}