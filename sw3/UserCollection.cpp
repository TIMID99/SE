#include "UserCollection.h"
#include "SessionCollection.h"

UserCollection* UserCollection::isInstance = nullptr;

// userList에 존재하는 user가 아닌 경우에만 추가
bool UserCollection::addNewUser(User* newUser) {
    for(int i = 0; i < userList.size(); i++) {
        if(userList[i]->getId() == newUser->getId()) {
            return false;
        }
    }

    userList.push_back(newUser);
    return true;
}

// UserCollection의 생성자는 한 번만 호출
// 생성되어 있는 instance를 반환
UserCollection* UserCollection::getInstance() {
    if (isInstance == nullptr) {
        isInstance = new UserCollection();
    }
    return isInstance;
}


// userList에서 user를 삭제하고 session에서도 삭제
void UserCollection::deleteUser(std::string id) {
    for(int i = 0; i < userList.size(); i++) {
        if(id == userList[i]->getId()){
            userList.erase(userList.begin() + i);
            SessionCollection::getInstance()->deleteSession(id);
        }
    }
}

// 로그인 id, password가 일치하는 지 확인 후에 session 생성
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

// 마지막으로 회원가입한 회원의 id 반환
std::string UserCollection::getLastRegisteredId() {
    return userList[userList.size()-1]->getId();
}

