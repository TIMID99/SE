#include "GeneralUser.h"
#include <iostream>
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

// 회사 이름으로 채용 공고 검색
void GeneralUser::searchRecruitment(string companyName)
{

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

// 지원 내역 조회
void GeneralUser::listApplies()
{
    appliedRecruitmentCollection.listApplies();
}

void GeneralUser::applyStatics()
{
    
}