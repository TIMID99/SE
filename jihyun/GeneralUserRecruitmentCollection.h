//
//  GeneralUserRecruitmentCollection.h
//  실습_state_machine
//
//  Created by 정지현 on 2023/05/26.
//

#ifndef GeneralUserRecruitmentCollection_h
#define GeneralUserRecruitmentCollection_h

#include "GeneralUser.h"
#include "Recruitment.h"
#include <string>
#include <vector>
#include <unordered_map>
#include <fstream>

using namespace std;

class GeneralUserRecruitmentCollection
{
private:
    vector<Recruitment> recruitments; // 벡터로 구현
    vector<*Recruitment> Appliedrecruitment; 
public:
    GeneralUserRecruitmentCollection(); // 기본 생성자
    // Recruitment findFirst();
    // Recruitment getNext();
    int size();
    void addApply(string);
    void removeApply(string);
    void listApplies(ofstream&);
    unordered_map<string, int> getTaskApplicantsCount();
};

#endif /* GeneralUserRecruitmentCollection_h */
