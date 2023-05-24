#include "Recruitment.h"
#include <string>
#include <iostream>

Recruitment::Recruitment()
{}

string Recruitment::getCompanyName()
{
    return companyName;
}

string Recruitment::getdueDate()
{
    return dueDate;
}

string Recruitment::getDuty()
{
    return duty;
}

int Recruitment::getNumberOfPeople()
{
    return numberOfPeople;
}

Recruitment Recruitment::getRecruitmentDetails()
{
    return *this;
}

