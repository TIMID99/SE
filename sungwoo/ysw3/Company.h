#pragma once
#include <string>
using namespace std;

class Company {
	string CompanyName, BusinessNumber, id, password;
public:
	Company();
	Company(string, string, string, string);
};