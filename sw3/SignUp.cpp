#include "SignUp.h"
#include "UserCollection.h"
#include "SignUpUI.h"

// control이 생성될 때 boundary를 생성
SignUp::SignUp() {
	signUpUI = new SignUpUI(this);
}

// control이 가지고 있는 boundary의 pointer를 반환
SignUpUI* SignUp::getInterfaceInstance() {
	return this->signUpUI;
}

// boundary에서 회원가입을 위해 control을 호출
bool SignUp::addUserRequest(User* newUser) {
	if(UserCollection::getInstance()->addNewUser(newUser))
		return true;
	else
		return false;
	
}
