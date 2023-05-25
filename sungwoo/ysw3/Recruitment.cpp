#include "Recruitment.h"
#include "ApplyRecruitment.h"
#include <iostream>
#include <string>
using namespace std;

Recruitment::Recruitment(string Task, int numberOfPerson, string deadLine) {
	this->Task = Task;
	this->numberOfPerson = numberOfPerson;
	this->deadLine = deadLine;

}

ApplyRecruitment::ApplyRecruitment() {

}

