//
//  RecruitmentInfoSystem.h
//  실습_state_machine
//
//  Created by 정지현 on 2023/05/24.
//

#ifndef RecruitmentInfoSystem_h
#define RecruitmentInfoSystem_h
#include "Company.h"
#include "Recruitment.h"
#include "CompanyRecruitmentCollection.h"
#include <iostream>

class RecruitmentInfoSystem{
private:
    Company company;
    Recruitment Recruitment;
//    GeneralUser generalUser;
    
    
public:
    void run();
    
};


#endif /* RecruitmentInfoSystem_h */
