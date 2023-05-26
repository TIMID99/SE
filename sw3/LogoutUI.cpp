#include "LogoutUI.h"
#include "SessionCollection.h"

LogoutUI::LogoutUI(Logout *logout)
    : logoutControl(logout) {}


// 마지막으로 로그인한 사용자 id를 session에서 받아서 logOut 호출
void LogoutUI::startInterface(std::ofstream &out_fp) {
    std::string id = SessionCollection::getInstance()->getLastSession();
    this->logOut(id);

    // 출력 작성
    out_fp << "2.2. 로그아웃\n";
    out_fp << "> " << id << std::endl;
    out_fp << std::endl;
}

// control 호출
void LogoutUI::logOut(std::string id) {
    logoutControl->logOutRequest(id);
}