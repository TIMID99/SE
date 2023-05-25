#pragma once
#include "Recruitment.h"
#include "Company.h"
using namespace std;

class ApplyRecruitmentUI;

class ApplyRecruitment {
	ApplyRecruitmentUI* ApplyRecruitmentUI;
public:
	ApplyRecruitment();
	ApplyRecruitmentUI* getInterfaceInstance();
	void ApplyRecruitmentRequest(string, int, string);
};