//
//  user.cpp
//  실습_state_machine
//
//  Created by 정지현 on 2023/05/26.
//

#include <stdio.h>
#include <string>

#include "user.h"

User::User() {
    userType = 0;
}

User::User(int userType, std::string id, std::string password, std::string name, std::string idNum)
    : userType(userType), id(id), password(password), name(name), idNum(idNum) {}

std::string User::getId() {
    return id;
}

std::string User::getPassword() {
    return password;
}


