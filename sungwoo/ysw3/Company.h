#pragma once
#include "User.h"
#include <string>
using namespace std;

class Company : User{
	string CompanyName, idNum, id, password;
public:
	Company();
	Company(string, string, string, string);
	string getCompanyName();
	string getCompanyidNum();
};