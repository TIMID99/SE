#include "User.h"
#include "Company.h"
#include "GeneralUser.h"
#include <iostream>

User::User() 
{}

User::User(int userType, string name, string idNum, string id, string password)
{
	this->userType = userType;
	this->name = name;
	this->idNum = idNum;
	this->id = id;
	this->password = password;
	
	if(userType == 1)
	{
		Company(userType, name, idNum, id, password);
	}
	else if(userType == 2)
	{
		GeneralUser(userType, name, idNum, id, password);
	}
}

string User::getUserId() {
	return id;
}