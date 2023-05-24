#pragma once
#include "Company.h"
#include "Recruitment.h"

using namespace std;

class CompanyRecruitmentCollection
{
private:
        Recruitment* ownedRecruitment;
        int recruitmentNum;

public:
        CompanyRecruitmentCollection();
        Recruitment findFirst();
        Recruitment getNext();
        void addNewRecruitment(Recruitment);
        int size();

};

