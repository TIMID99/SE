#pragma once
#include "Recruitment.h"
#include <vector>
using namespace std;

class RecruitmentCollection {
	vector<Recruitment*> recruitmentCollection;
	static Recruitment* isInstance;
public:
	bool addNewRecruitment(Recruitment*);

};