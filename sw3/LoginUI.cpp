#include "LoginUI.h"
#include <fstream>

LoginUI::LoginUI(Login* loginControl)
	: loginControl(loginControl) {}

// control 호출
bool LoginUI::login(std::string loginId, std::string loginPw) {
    return loginControl->loginRequest(loginId, loginPw);
}


// 파일에서 정보를 받아 login 호출
void LoginUI::startInterface(std::ifstream &in_fp, std::ofstream &out_fp) {
    std::string id, passwd;
    in_fp >> id >> passwd;

    if(login(id, passwd)) {
        out_fp << "2.1. 로그인\n";
        out_fp << "> " << id << " " << passwd << std::endl;
        out_fp << std::endl;
    }
}