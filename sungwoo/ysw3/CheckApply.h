#pragma once
#include "Company.h"
#include "Recruitment.h"

class CheckApply : Recruitment{
	string idNum, Task, deadLine, name;
	int numberOfPerson;

public:
	CheckApply();
	CheckApply(string, string, string, int, string);
	CheckApply getCheckApply();
};