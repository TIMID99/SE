#include "Login.h"
#include "UserCollection.h"

// control이 생성될 때 boundary를 생성
Login::Login() {
    loginUI = new LoginUI(this);
}

// control이 가지고 있는 boundary의 pointer를 반환
LoginUI* Login::getInterfaceInstance() {
    return loginUI;
}

// boundary에서 로그인을 위해 control을 호출
bool Login::loginRequest(std::string id, std::string passwd) {
    return UserCollection::getInstance()->validate(id, passwd);
}