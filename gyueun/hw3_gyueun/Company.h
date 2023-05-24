#pragma once
#include "User.h"
#include "Recruitment.h"
#include "CompanyRecruitmentCollection.h"
#include <iostream>
#include <string>

using namespace std;

class Company : public User
{

private:
    CompanyRecruitmentCollection ownedRecruitmenCollection;

public:
    Company();
    Company(string, string, string, string, int, CompanyRecruitmentCollection);
    void countByDuty();

};

