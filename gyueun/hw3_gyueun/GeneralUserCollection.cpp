#include "GeneralUserCollection.h"

GeneralUserCollection::GeneralUserCollection() {
	GeneralUser* appliedGeneralUser = new GeneralUser[100];
	this-> appliedGeneralUser = appliedGeneralUser;
	generalUserNum = 0;
}

void GeneralUserCollection::addNewGeneralUser(GeneralUser generalUser) {
	appliedGeneralUser[generalUserNum++] = generalUser;
}

void GeneralUserCollection::deleteGeneralUser(GeneralUser generalUser) {
	for (int i = 0; i < generalUserNum; i++) {
		if (appliedGeneralUser[i].getUserId() == generalUser.getUserId()) {
			std::swap(appliedGeneralUser[i], appliedGeneralUser[generalUserNum - 1]);
			generalUserNum--;
		}
	}
}
