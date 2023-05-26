#include "DeleteUser.h"
#include "DeleteUserUI.h"
#include "UserCollection.h"
#include "SessionCollection.h"

// control이 생성될 때 boundary를 생성
DeleteUser::DeleteUser() {
    deleteUserUI = new DeleteUserUI(this);
}

// boundary에서 회원탈퇴를 위해 control을 호출
void DeleteUser::deleteUserRequest(std::string id) {
    UserCollection::getInstance()->deleteUser(id);
    SessionCollection::getInstance()->deleteSession(id);
}

// control이 가지고 있는 boundary의 pointer를 반환
DeleteUserUI* DeleteUser::getInterfaceInstance() {
    return deleteUserUI;
}