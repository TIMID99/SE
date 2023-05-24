#pragma once
#include "Recruitment.h"
#include "GeneralUser.h"

using namespace std;

class GeneralUserCollection
{
private:	
    GeneralUser* appliedGeneralUser;
	int generalUserNum;

public:
    GeneralUserCollection();
	void addNewGeneralUser(GeneralUser);
	void deleteGeneralUser(GeneralUser);
    GeneralUser findFirst();
    GeneralUser getNext();
	int size();

};
