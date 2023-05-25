#include "CheckApply.h"
#include "Recruitment.h"

CheckApply::CheckApply() {

}

CheckApply::CheckApply(string idNum, string name, string task, int numberOfPerson, string deadLine) {
	this->idNum = idNum;
	this->name = name;
	this->Task = task;
	this->numberOfPerson = numberOfPerson;
	this->deadLine = deadLine;
}

CheckApply CheckApply::getCheckApply() {
	return *this;
}