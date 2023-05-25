#include "Company.h"
using namespace std;

Company::Company() {

}

Company::Company(string name, string numId, string id, string password) {
	this->CompanyName = name;
	this->idNum = numId;
	this->id = id;
	this->password = password;
}

