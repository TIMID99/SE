#pragma once
#include "GeneralUserCollection.h"
#include <string>
#include <vector>

using namespace std;

/*  회사 회원이 등록한 Recruitment
 *  
 */
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

