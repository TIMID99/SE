//
//  collection_user.cpp
//  실습_state_machine
//
//  Created by 정지현 on 2023/05/26.
//

#include <stdio.h>

#include "user.h"
#include "collection_user.h"
#include "collection_session.h"

UserCollection* UserCollection::isInstance = nullptr;

bool UserCollection::addNewUser(User* newUser) {
    for(int i = 0; i < userList.size(); i++) {
        if(userList[i]->getId() == newUser->getId()) {
            return false;
        }
    }

    userList.push_back(newUser);
    return true;
}

UserCollection* UserCollection::getInstance() {
    if (isInstance == nullptr) {
        isInstance = new UserCollection();
    }
    return isInstance;
}


void UserCollection::deleteUser(std::string id) {
    for(int i = 0; i < userList.size(); i++) {
        if(id == userList[i]->getId()){
            userList.erase(userList.begin() + i);
            SessionCollection::getInstance()->deleteSession(id);
        }
    }
}

bool UserCollection::validate(std::string loginId, std::string loginPw) {
    for(int i = 0; i < userList.size(); i++){
        if(loginId == userList[i]->getId()
         && loginPw == userList[i]->getPassword()){
            SessionCollection::getInstance()->createSession(loginId);
            return true;
        }
    }
    return false;
}

std::string UserCollection::getLastRegisteredId() {
    return userList[userList.size()-1]->getId();
}


