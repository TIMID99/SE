#pragma once
#include "GeneralUserCollection.h"
#include <string>

using namespace std;

class Recruitment
{
private:
        GeneralUserCollection appliersCollection;
        string companyName, duty, dueDate; // companyName은 Recruitment 추가 시 this.name 
        int numberOfPeople;

public:
        Recruitment();
        string getCompanyName();
        string getDuty();
        string getdueDate();
        int getNumberOfPeople();
        Recruitment getRecruitmentDetails();

};

