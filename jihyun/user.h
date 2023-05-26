//
//  user.h
//  실습_state_machine
//
//  Created by 정지현 on 2023/05/26.
//

#ifndef user_h
#define user_h

#pragma once

#include <string>
using namespace std;

class User {
protected:
    string id, password,name,idNum;
    int userType;
    
public:
    User();
    User(int, std::string, std::string, std::string, std::string);
    std::string getId();
    std::string getPassword();
    
    
};
#endif /* user_h */
