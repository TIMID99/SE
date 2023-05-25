#pragma once
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
    void listApplies();
    // void sortByCompName();
    void applyStatics();
};

