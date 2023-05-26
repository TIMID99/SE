#include "DeleteUserUI.h"
#include "UserCollection.h"


DeleteUserUI::DeleteUserUI(DeleteUser* deleteUserControl)
	: deleteUserControl(deleteUserControl) {}

// control 호출
void DeleteUserUI::deleteUser(std::string id) {
    deleteUserControl->deleteUserRequest(id);
}

// 마지막 회원 가입 정보로 deleteUser 호출
void DeleteUserUI::startInterface(std::ofstream& out_fp) {
    std::string id = UserCollection::getInstance()->getLastRegisteredId();

    deleteUser(id);

    out_fp << "1.2. 회원탈퇴\n";
    out_fp << "> " << id << std::endl;
    out_fp << std::endl;
}


