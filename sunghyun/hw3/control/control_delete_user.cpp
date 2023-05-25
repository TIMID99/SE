#include "control_delete_user.h"
#include "interface_delete_user.h"
#include "collection_user.h"
#include "collection_session.h"

DeleteUser::DeleteUser() {
    deleteUserUI = new DeleteUserUI(this);
}

void DeleteUser::deleteUserRequest(std::string id) {
    UserCollection::getInstance()->deleteUser(id);
    SessionCollection::getInstance()->deleteSession(id);
}

DeleteUserUI* DeleteUser::getInterfaceInstance() {
    return deleteUserUI;
}