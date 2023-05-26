#include "CompanyRecruitmentCollection.h"
#include <iostream>

// 채용 정보 등록(using vector)
void CompanyRecruitmentCollection::addRecruitment(string companyName, string idNum, string task, int numOfMembers, string deadline)
{
    Recruitment recruitment(companyName, idNum, task, numOfMembers, deadline);
    recruitments.push_back(recruitment);
}

// 등록한 채용 정보 조회(using vector)
void CompanyRecruitmentCollection::listRecruitments()
{
    for (Recruitment& recruitment : recruitments)
    {
        cout << recruitment.getTask() << " " << recruitment.getNumOfMembers() << " " << recruitment.getDeadline() << endl;
    }
}

// 등록된 공고 수
int CompanyRecruitmentCollection::size()
{
    return recruitments.size();
}

// 지원 정보 통계
unordered_map<string, int> CompanyRecruitmentCollection::getTaskApplicantsCount()
{
    unordered_map<string, int> taskApplicantsCount;

    for (Recruitment recruitment : recruitments)
    {
        taskApplicantsCount[recruitment.getTask()]++;
    }

    return taskApplicantsCount;
}