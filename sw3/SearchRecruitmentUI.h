//
//  SearchRecruitmentUI.h
//  실습_state_machine
//
//  Created by 정지현 on 2023/05/25.
//

#ifndef SearchRecruitementUI_h
#define SearchRecruitementUI_h

#include <string>
#include "SearchRecruitment.h"
#include "Recruitment.h"

using namespace std;

class SearchRecruitment;

class SearchRecruitmentUI {

private:
    SearchRecruitment* searchRecruitment;
    vector<Recruitment*> recruitmentList;

public:
    SearchRecruitmentUI(SearchRecruitment*);
    void startInterface(ifstream&, ofstream&);

    string getCompanyName(ifstream&);

};
#endif /* SearchRecruitementUI_h */