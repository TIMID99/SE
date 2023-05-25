#include "GeneralUserRecruitmentCollection.h"
#include <iostream>

// 채용 지원 횟수
int GeneralUserRecruitmentCollection::size()
{
    return recruitments.size();
}

// 
void GeneralUserRecruitmentCollection::addApply(string inputtedIdNum)
{

}


void GeneralUserRecruitmentCollection::removeApply(string inputtedIdNum)
{

}


void GeneralUserRecruitmentCollection::listApplies()
{
    for (Recruitment& recruitment : recruitments) 
    {
        cout << recruitment.getCompanyName() << " " << recruitment.getIdNum() << " " << recruitment.getTask() << " " 
            << recruitment.getNumOfMembers() << " " << recruitment.getDeadline() << endl;
    }
}

// 지원 정보 통계 추가



