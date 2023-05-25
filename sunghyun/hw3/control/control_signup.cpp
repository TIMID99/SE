#include "control_signup.h"
#include "collection_user.h"
#include "interface_signup.h"

SignUp::SignUp() {
	signUpUI = new SignUpUI(this);
}

SignUpUI* SignUp::getInterfaceInstance() {
	return this->signUpUI;
}


bool SignUp::addUserRequest(User* newUser) {
	if(UserCollection::getInstance()->addNewUser(newUser))
		return true;
	else
		return false;
	
}
