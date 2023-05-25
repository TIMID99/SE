//
//  Recruitment.cpp
//  실습_state_machine
//
//  Created by 정지현 on 2023/05/26.
//

#include <stdio.h>

#include "Recruitment.h"

string Recruitment::getTask(){
    return task;
}

string Recruitment::getDeadline(){
    return deadline;
}

int Recruitment::getNumOfMembers(){
    return numOfMembers;
}
