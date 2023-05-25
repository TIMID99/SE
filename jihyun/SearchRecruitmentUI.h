//
//  SearchRecruitmentUI.h
//  실습_state_machine
//
//  Created by 정지현 on 2023/05/25.
//

#ifndef SearchRecruitementUI_h
#define SearchRecruitementUI_h

#include "SearchRecruitment.h"

class SearchRecruitmentUI{
    
private:
    SearchRecruit searchRecruit;
    
public:
    void startInterface();
    char getCompanyName(char companyName);
};
#endif /* SearchRecruitementUI_h */
