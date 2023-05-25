#pragma once
#include "Company.h"
#include "Recruitment.h"

using namespace std;

class ApplyRecruitment : public Recruitment {
	string name, idNum, deadLine, Task;
	int numberOfPerson;
public:
	ApplyRecruitment();
	ApplyRecruitment(string, string, string, int, string);
};
