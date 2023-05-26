//
//  GeneralUserRecruitmentCollection.cpp
//  실습_state_machine
//
//  Created by 정지현 on 2023/05/26.
//

#include "GeneralUserRecruitmentCollection.h"
#include "Recruitment.h"
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


void GeneralUserRecruitmentCollection::listApplies(ofstream& out_fp)
{
    out_fp << "4.3. 지원 정보 조회\n";

    for (Recruitment& recruitment : recruitments)
    {
        out_fp << recruitment.getCompanyName() << " " << recruitment.getIdNum() << " " << recruitment.getTask() << " "
            << recruitment.getNumOfMembers() << " " << recruitment.getDeadline() << endl;
    }
}

// 지원 정보 통계
unordered_map<string, int> GeneralUserRecruitmentCollection::getTaskApplicantsCount()
{
    unordered_map<string, int> taskApplicantsCount;

    for (Recruitment recruitment : recruitments)
    {
        taskApplicantsCount[recruitment.getTask()]++;
    }

    return taskApplicantsCount;
}


