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

// 1. 채용 정보 등록 without parameter
void Company::addRecruitment()
{ 
    /* 혹시 몰라서 parameter 없는 함수도 선언해뒀어요
    */
}

// 2. 채용 정보 등록 with task, numOfMembers, deadline
void Company::addRecruitment(string task, int numOfMembers, string deadline)
{ 
/* 
    [UI에서 입력 받은 task, numOfMembers, deadline 그대로 가져와 활용]
    (1) Company가 ownedRecruitmentCollection을 활용해 직접 생성.
        Company가 생성하는 과정에서 companyName, idNum 활용 가능 -> 아래 코드
    
    혹은 
    
    (2) 파라미터로 받은 세 값을 CompanyRecruitmentCollection한테 넘겨주고 거기서 생성
*/
    ownedRecruitmentCollection.addRecruitment(name, idNum, task, numOfMembers, deadline);
}

// 채용 정보 등록 with recruitment
void Company::addRecruitment(Recruitment recruitment)
{
/* 
    [이미 생성 된 recruitment를 parameter로 받아와 활용] 
    boundary -> control -> entity 과정 중 어딘 가에서 생성자로 Recruitment 생성.
*/

}

// 등록한 채용 정보 조회
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
