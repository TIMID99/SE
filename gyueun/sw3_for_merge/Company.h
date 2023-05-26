#pragma once
#include "User.h"
#include "CompanyRecruitmentCollection.h"
#include <string>
#include <fstream>

using namespace std;

/*  User의 subclass Company
 *  채용 공고 등록, 등록한 채용 공고 조회, 지원 정보 통계
 */
class Company : public User
{

private:
    CompanyRecruitmentCollection ownedRecruitmentCollection;

public:
    Company();
    Company(int, string, string, string, string);
    void addRecruitment(string, int, string);
    void listRecruitments(); 
    virtual void applyStatics(ofstream&); 

};
