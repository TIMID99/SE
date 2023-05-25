#include "Recruitment.h"
#include "Company.h"
#include "ApplyRecruitment.h"
#include <iostream>
#include <string>
using namespace std;

Recruitment::Recruitment() {

}

Recruitment::Recruitment(string Task, int numberOfPerson, string deadLine, string name) {
	this->Task = Task;
	this->numberOfPerson = numberOfPerson;
	this->deadLine = deadLine;
	this->CompanyName = name;
}

string Recruitment::getCompanyName() {
	return CompanyName;
}

string Recruitment::getDeadLine() {
	return deadLine;
}

string Recruitment::getTask() {
	return Task;
}

int Recruitment::getnumberOfPerson() {
	return numberOfPerson;
}

