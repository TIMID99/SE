//
//  Recruitment.h
//  실습_state_machine
//
//  Created by 정지현 on 2023/05/24.
//

#ifndef Recruitment_h
#define Recruitment_h

#include <fstream>
#include <string>

using namespace std;

class Recruitment{
private:
    int recruitmentIdx;
    string task;
    int numOfMembers;
    string deadline;
    
public:
    string getTask();
    string getDeadline();
    int getNumOfMembers();
    
};

#endif /* Recruitment_h */
