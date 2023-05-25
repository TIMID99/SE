#include "control_logout.h"
#include "collection_session.h"

void Logout::logOutRequest(std::string id) {
    SessionCollection::getInstance()->deleteSession(id);
}

LogoutUI* Logout::getInterfaceInstance() {
    return logoutUI;
}