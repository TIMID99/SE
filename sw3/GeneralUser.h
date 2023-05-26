#pragma once
#include "User.h"
#include <string>
#include "GeneralUserRecruitmentCollection.h"

class GeneralUser : public User {
	GeneralUserRecruitmentCollection appliedRecruitmentCollection;
public:
	GeneralUser();
	GeneralUser(int, std::string, std::string, std::string, std::string);
    void addApplies(string);
    void removeApplies(string);
    void listApplies(ofstream&);
    // void sortByCompName();
    virtual void applyStatics(ofstream&);
};
