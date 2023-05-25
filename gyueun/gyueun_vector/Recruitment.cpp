#include "Recruitment.h"
#include <iostream>

using namespace std;

Recruitment::Recruitment(string _companyName, string _idNum, string _task, int _numOfMembers, string _deadline)
: companyName(_companyName), idNum(_idNum), task(_task), numOfMembers(_numOfMembers), deadline(_deadline) {}


string Recruitment::getCompanyName()
{
    return companyName;
}

string Recruitment::getIdNum()
{
    return idNum;
}

string Recruitment::getDeadline()
{
    return deadline;
}

string Recruitment::getTask()
{
    return task;
}

int Recruitment::getNumOfMembers()
{
    return numOfMembers;
}

Recruitment Recruitment::getRecruitmentDetails()
{
    cout << getCompanyName() << " " << getIdNum() << " " << getTask() << " " << getNumOfMembers() << " " <<getDeadline();
    return *this;
}


