#pragma once
#include "GeneralUser.h"
#include "Recruitment.h"
#include <string>
#include <vector>
#include <unordered_map>
#include <fstream>

using namespace std;


/*  일반 회원이 지원한 Recruitment 정보를 관리할 수 있는 GeneralUser->Recruitment 간 collection class
 *
 */
class GeneralUserRecruitmentCollection
{
private:
    vector<Recruitment> recruitments; 

public:
    GeneralUserRecruitmentCollection(); 
    int size();
    void addApply(string);
    void removeApply(string);
    void listApplies(ofstream&);
    unordered_map<string, int> getTaskApplicantsCount();
};


