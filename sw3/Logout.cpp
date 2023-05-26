#include "Logout.h"
#include "SessionCollection.h"

// control이 생성될 때 boundary를 생성
Logout::Logout() {
    logoutUI = new LogoutUI(this);
}

// boundary에서 로그아웃을 위해 control을 호출
void Logout::logOutRequest(std::string id) {
    SessionCollection::getInstance()->deleteSession(id);
}

// control이 가지고 있는 boundary의 pointer를 반환
LogoutUI* Logout::getInterfaceInstance() {
    return logoutUI;
}