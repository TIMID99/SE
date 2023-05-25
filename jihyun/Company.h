//
//  Company.h
//  실습_state_machine
//
//  Created by 정지현 on 2023/05/24.
//
#ifndef Company_h
#define Company_h

#include <iostream>
#include <vector>

#include "user.h"
#include "Recruitment.h"

using namespace std;

class Company : public User{
    
private:
    
    vector<Recruitment*> recruitmentList;
    
public:
    
    vector<Recruitment*> getRecruitmentList();
    string getName();
    string getIdNum();

};

#endif Company_H
