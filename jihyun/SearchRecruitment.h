//
//  SearchRecruitment.h
//  실습_state_machine
//
//  Created by 정지현 on 2023/05/24.
//

#ifndef SearchRecruitment_h
#define SearchRecruitment_h

#include <string>
#include "SearchRecruitmentUI.h"
#include "Company.h"

class SearchRecruitment{
  
private:
    Company* companyList[200];
    SearchRecruitmentUI searchRecruitmentUI;
    
public:
    SearchRecruitment(char companyName){
        
        searchRecruitmentUI.startInterface();
        searchRecruitmentUI.getCompanyName(companyName);
    }

    Recruitment* showRecruitmentList(char companyName);
};

#endif /* SearchRecruitment_h */
