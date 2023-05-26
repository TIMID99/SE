#pragma once

#include <fstream>
#include "SignUp.h"
#include "user.h"

class SignUp;

class SignUpUI {
	SignUp* signupControl;
public:
	SignUpUI(SignUp*);
	void startInterface(std::ifstream&, std::ofstream&); // 파일 입출력 처리
	bool signUp(User*); // 입력 파일 정보로 호출
};
