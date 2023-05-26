#include "Company.h"
#include <iostream>
#include <unordered_map>

Company::Company(int _userType, string _name, string _idNum, string _id, string _password)
{
    this->userType = _userType;
    this->name = _name;
	this->idNum = _idNum;
	this->id = _id;
	this->password = _password;

    ownedRecruitmentCollection = CompanyRecruitmentCollection();
}


// 채용 정보 등록: task, numOfMembers, deadline를 입력 받아 회사의 채용 공고 등록
void Company::addRecruitment(string task, int numOfMembers, string deadline)
{ 

    ownedRecruitmentCollection.addRecruitment(name, idNum, task, numOfMembers, deadline);
}


// 채용 정보 조회: 회사 회원이 본인이 등록한 채용 정보 조회
void Company::listRecruitments()
{
    ownedRecruitmentCollection.listRecruitments();
}

// 지원정보통계: 회사 회원이 등록한 채용 정보에 대해 업무별 지원자수를 출력
void Company::applyStatics(ofstream& out_fp)
{
    out_fp << "5.1. 지원 정보 통계\n";
    unordered_map<string, int> taskApplicantsCount = ownedRecruitmentCollection.getTaskApplicantsCount();
        
    for (const auto& pair : taskApplicantsCount) 
    {
        out_fp << pair.first << " " << pair.second << endl;
    }
    
}
