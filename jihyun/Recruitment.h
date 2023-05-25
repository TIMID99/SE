//
//  Recruitment.h
//  실습_state_machine
//
//  Created by 정지현 on 2023/05/24.
//

#ifndef Recruitment_h
#define Recruitment_h

#include <time.h>

class Recruitment{
private:
    char task;
    int numOfMembers;
    char deadline;
public:
    void showRecruitmentInfo() const;
    
};

#endif /* Recruitment_h */
