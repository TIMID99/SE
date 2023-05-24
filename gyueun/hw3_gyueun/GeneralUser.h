#pragma once
#include "User.h"
#include "GeneralUserRecruitmentCollection.h"

using namespace std;

class GeneralUser : public User
{
private:
        GeneralUserRecruitmentCollection appliedRecruitmentCollection;

public:
        GeneralUser();
        Recruitment listApplies();
        void sortByCompName();
        // void countByDuty();

};

