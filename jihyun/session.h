//
//  session.h
//  실습_state_machine
//
//  Created by 정지현 on 2023/05/26.
//

#ifndef session_h
#define session_h

#include <string>

class Session {
    std::string sessionId;
public:
    Session(std::string);
    std::string getSessionId();
};
#endif /* session_h */
