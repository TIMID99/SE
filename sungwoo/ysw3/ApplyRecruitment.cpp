#include "ApplyRecruitment_control.h"
#include "ApplyRecruitment.h"
#include <string>
#include <iostream>

using namespace std;

ApplyRecruitment::ApplyRecruitment() {

}

ApplyRecruitment::ApplyRecruitment(string name, string idNum, string Task, int numberOfPerson, string deadLine) {
	this->name = name;
	this->idNum = idNum;
	this->Task = Task;
	this->numberOfPerson = numberOfPerson;
	this->deadLine = deadLine;
}


