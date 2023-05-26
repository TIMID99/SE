#pragma once
#include <iostream>
#include <string>

using namespace std;


/*  시스템에 회원가입 한 회원
 *
 */
class User
{

protected:
	string id, password, name, idNum;
	int userType;

public:
	User();
	User(int, string, string, string, string);
	string getUserId();
	virtual void applyStatics(ofstream&);
};

