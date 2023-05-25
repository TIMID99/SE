#pragma once
#include "GeneralUserCollection.h"
#include <string>
#include <vector>

using namespace std;

class Recruitment
{
private:
    GeneralUserCollection appliersCollection;
    string companyName, idNum, task, deadline; 
    int numOfMembers;

public:
    Recruitment();
    Recruitment(string, string, string, int, string);
    string getCompanyName();
    string getIdNum();
    string getBusinessNumber();
    string getTask();
    string getDeadline();
    int getNumOfMembers();
    Recruitment getRecruitmentDetails();

};

