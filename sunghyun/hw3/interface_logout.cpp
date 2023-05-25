#include "interface_logout.h"
#include "collection_session.h"

LogoutUI::LogoutUI(Logout *logout)
    : logoutControl(logout) {}

void LogoutUI::startInterface(std::ofstream &out_fp) {
    std::string id = SessionCollection::getInstance()->getLastSession();
    this->logOut(id);

    /*
     * 출력 작성
     */
    out_fp << "2.2. 로그아웃\n";
    out_fp << "> " << id << std::endl;
    out_fp << std::endl;
}

void LogoutUI::logOut(std::string id) {
    logoutControl->logOutRequest(id);
}