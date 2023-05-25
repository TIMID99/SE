#pragma once
#include "User.h"
#include "CompanyRecruitmentCollection.h"
#include <string>
#include <fstream>

using namespace std;

class Company : public User
{

private:
    CompanyRecruitmentCollection ownedRecruitmentCollection;

public:
    Company();
    Company(int, string, string, string, string);

    // 채용 정보 등록 
    void addRecruitment(); // 
    void addRecruitment(string, int, string); // boundary -> control 거쳐서 온 task, numOfMembers, deadline로 recruitment 생성할 때
    void addRecruitment(Recruitment); // 이미 생성된 recruitment를 받아와서 추가할 때
    
    void listRecruitments(); // 등록된 채용 정보 조회
    virtual void applyStatics(ofstream&); // 지원 정보 통계 for 회사 회원

};
