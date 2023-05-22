#include "loginUI.h"
#include <fstream>

LoginUI::LoginUI(Login* loginControl)
	: loginControl(loginControl) {}

void LoginUI::login(std::ifstream& in_fp, std::ofstream& out_fp) {
	std::string id, passwd;
	in_fp >> id >> passwd;

	out_fp << "1.2 회원탈퇴\n";
	out_fp << " > " << id << " " << passwd << std::endl;
}