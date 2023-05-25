//
//  Company.cpp
//  실습_state_machine
//
//  Created by 정지현 on 2023/05/26.
//

#include <iostream>
#include <string>

#include "Company.h"

string Company::getName(){
    return name;
}

string Company::getIdNum(){
    return idNum;
}


vector<Recruitment*> Company::getRecruitmentList(){
    return recruitmentList;
}


