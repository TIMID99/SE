//
//  GeneralUser.h
//  실습_state_machine
//
//  Created by 정지현 on 2023/05/26.
//

#ifndef GeneralUser_h
#define GeneralUser_h

#include "User.h"
#include "GeneralUserRecruitmentCollection.h"
#include <string>

using namespace std;

class GeneralUser : public User
{

private:
    GeneralUserRecruitmentCollection appliedRecruitmentCollection;

public:
    GeneralUser();
    GeneralUser(int, string, string, string, string);
    void searchRecruitment(string);
    void addApplies(string);
    void removeApplies(string);
    void listApplies(ofstream&);
    // void sortByCompName();
    virtual void applyStatics(ofstream&);
};

#endif /* GeneralUser_h */
