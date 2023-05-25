//
//  collection_user.h
//  실습_state_machine
//
//  Created by 정지현 on 2023/05/26.
//

#ifndef collection_user_h
#define collection_user_h

#include "user.h"
#include <vector>


class UserCollection {
    std::vector<User*> userList;
    static UserCollection* isInstance;
    
public:
    bool addNewUser(User*);
    void deleteUser(std::string);
    bool validate(std::string, std::string);
    std::string getLastRegisteredId();
    static UserCollection* getInstance();
  
};

#endif /* collection_user_h */
