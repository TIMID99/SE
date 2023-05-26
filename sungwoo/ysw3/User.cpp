include "User.h"
using namespace std;

User::User() {

}

User::User(int userType, string id, string password, string name, string idNum) {
	this->id = id;
	this->idNum = idNum;
	this->name = name;
	this->password = password;
}

string User::getid() {
	return id;
}