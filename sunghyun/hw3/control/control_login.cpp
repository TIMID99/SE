#include "control_login.h"
#include "collection_user.h"

Login::Login() {
    loginUI = new LoginUI(this);
}

LoginUI* Login::getInterfaceInstance() {
    return loginUI;
}

bool Login::loginRequest(std::string id, std::string passwd) {
    return UserCollection::getInstance()->validate(id, passwd);
}