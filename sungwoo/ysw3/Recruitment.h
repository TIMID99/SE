#pragma once
#include "Company.h"
#include <string>
using namespace std;

class Recruitment {
	string CompanyName, Task, deadLine;
	int numberOfPerson;

public:
	Recruitment();
	Recruitment(string, int, string, string);
	string getCompanyName();
	string getTask();
	string getDeadLine();
	int getnumberOfPerson();
};