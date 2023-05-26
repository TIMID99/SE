#pragma once
#include "Company.h"
#include "Recruitment.h"
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

/*  회사 회원이 등록한 Recruitment를 관리할 수 있는 Company->Recruitment 간 collection class
 *
 */
class CompanyRecruitmentCollection
{
private:
    vector<Recruitment> recruitments; 

public:
    CompanyRecruitmentCollection(); 
    int size();
    void addRecruitment(string, string, string, int, string); 
    void listRecruitments(); 
    unordered_map<string, int> getTaskApplicantsCount();
};
