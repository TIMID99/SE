#include "interface_login.h"
#include <fstream>

LoginUI::LoginUI(Login* loginControl)
	: loginControl(loginControl) {}

bool LoginUI::login(std::string loginId, std::string loginPw) {
    return loginControl->loginRequest(loginId, loginPw);
}

void LoginUI::startInterface(std::ifstream &in_fp, std::ofstream &out_fp) {
    std::string id, passwd;
    in_fp >> id >> passwd;

    if(login(id, passwd)) {
        out_fp << "1.2 회원탈퇴\n";
        out_fp << " > " << id << " " << passwd << std::endl;
    }
}