#include "GeneralUser.h"
#include <iostream>
#include <fstream>
#include <unordered_map>

GeneralUser::GeneralUser(int _userType, string _name, string _idNum, string _id, string _password)
{
    this->userType = _userType;
    this->name = _name;
	this->idNum = _idNum;
	this->id = _id;
	this->password = _password;
    
    appliedRecruitmentCollection = GeneralUserRecruitmentCollection();
}

// 채용 지원
void GeneralUser::addApplies(string inputtedIdNum)
{
    appliedRecruitmentCollection.addApply(inputtedIdNum);
}

// 지원 취소
void GeneralUser::removeApplies(string inputtedIdNum)
{
    appliedRecruitmentCollection.removeApply(inputtedIdNum);
}

// 지원 내역 조회: 일반 회원이 본인이 지원한 지원 내역을 조회
void GeneralUser::listApplies(ofstream& out_fp)
{
    appliedRecruitmentCollection.listApplies(out_fp);
}

// 지원 정보 통계: 일반 회원 본인이 지원한 지원 정보를 업무별 지원 횟수로 출력
void GeneralUser::applyStatics(ofstream& out_fp)
{
    out_fp << "5.1. 지원 정보 통계\n";
    unordered_map<string, int> taskApplicantsCount = appliedRecruitmentCollection.getTaskApplicantsCount();
        
    for (const auto& pair : taskApplicantsCount) 
    {
        out_fp << pair.first << " " << pair.second << endl;
    }
}