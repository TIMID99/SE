#pragma once
#include "Login.h"
#include <fstream>

class Login;

class LoginUI {
	Login* loginControl;
public:
	LoginUI(Login*);
	void startInterface(std::ifstream&, std::ofstream&); // 파일 포인터로 입출력 처리
    bool login(std::string, std::string); // 입력 파일 정보로 호출
};
