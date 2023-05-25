#include "collection_user.h"
#include "collection_session.h"

bool UserCollection::addNewUser(User* newUser) {
    for(int i = 0; i < userNum; i++) {
        if(userCollection[i]->getId() == newUser->getId()) {
            return false;
        }
    }

    userCollection.push_back(newUser);
    return true;
}

UserCollection* UserCollection::getInstance() {
    if (isInstance == nullptr) {
        isInstance = new UserCollection();
    }
    return isInstance;
}


void UserCollection::deleteUser(std::string id) {
    for(int i = 0; i < userCollection.size(); i++) {
        if(id == userCollection[i]->getId()){
            userCollection.erase(userCollection.begin() + i);
            SessionCollection::getInstance()->deleteSession(id);
        }
    }
}

bool UserCollection::validate(std::string loginId, std::string loginPw) {
    for(int i = 0; i < userCollection.size(); i++){
        if(loginId == userCollection[i]->getId()
         && loginPw == userCollection[i]->getPassword()){
            SessionCollection::getInstance()->createSession(loginId);
            return true;
        }
    }
    return false;
}

std::string UserCollection::getLastRegisteredId() {
    return userCollection[userCollection.size()-1]->getId();
}

