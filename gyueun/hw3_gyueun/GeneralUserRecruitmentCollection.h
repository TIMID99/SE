#pragma once
#include "GeneralUser.h"
#include "Recruitment.h"

using namespace std;

class GeneralUserRecruitmentCollection
{
private:
        Recruitment* appliedRecruitment;
        int recruitmentNum;

public:
        GeneralUserRecruitmentCollection();
        Recruitment findFirst();
        Recruitment getNext();
        void addNewRecruitment(Recruitment);
        void deleteRecruitment(Recruitment);
        int size();
};

