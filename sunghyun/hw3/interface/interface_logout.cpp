#include "interface_logout.h"
#include "collection_session.h"

LogoutUI::LogoutUI(Logout *logout)
    : logoutControl(logout) {}

void LogoutUI::startInterface(std::ofstream &out_fp) {
    std::string id = SessionCollection::getInstance()->getLastSession();
    logOut(id);

    /*
     * 출력 작성
     */
}

void LogoutUI::logOut(std::string id) {
    logoutControl->logOutRequest(id);
}