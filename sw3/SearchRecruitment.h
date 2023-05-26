//
//  SearchRecruitment.h
//  실습_state_machine
//
//  Created by 정지현 on 2023/05/24.
//

#ifndef SearchRecruitment_h
#define SearchRecruitment_h

#include <string>
#include <vector>

#include "SearchRecruitmentUI.h"
#include "Company.h"
#include "Recruitment.h"

class SearchRecruitmentUI;

class SearchRecruitment {

private:
    SearchRecruitmentUI* searchRecruitmentUI;
    Company* company;
    std::vector<Recruitment*> recruitmentList;


public:
    SearchRecruitment();

    SearchRecruitmentUI* getInterfaceInstance();
    vector<Recruitment*> showRecruitmentList(string companyName);
    Comapany* getSearchingCompany();
    //    
    //    bool sortByCompanyName(Company* companyA, Company* companyB);
};

#endif /* SearchRecruitment_h */