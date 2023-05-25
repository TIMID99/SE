#pragma once

#include "Recruitment.h"
#include "ApplyRecruitment.h"


class ApplyRecruitmentUI {
	ApplyRecruitment* applyRecruitment;
public:
	ApplyRecruitmentUI(ApplyRecruitment*);
	string showApplyRecruitment(Recruitment);
};