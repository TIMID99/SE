#pragma once
#include "GeneralUser.h"
#include "Recruitment.h"
#include <string>

using namespace std;


/*  Recruitment가 본인에게 지원한 일반 회원 정보를 관리할 수 있는 Recruitment->GeneralUser 간 collection class
 *
 */
class GeneralUserCollection
{
private:
    vector<GeneralUser> appliedGeneralUsers; 

public:
    GeneralUserCollection(); 
};

