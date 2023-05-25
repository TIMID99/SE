#include "interface_delete_user.h"
#include "collection_user.h"


DeleteUserUI::DeleteUserUI(DeleteUser* deleteUserControl)
	: deleteUserControl(deleteUserControl) {}

void DeleteUserUI::deleteUser(std::string id) {
    deleteUserControl->deleteUserRequest(id);
}

void DeleteUserUI::startInterface(std::ofstream& out_fp) {
    std::string id = UserCollection::getInstance()->getLastRegisteredId();

    deleteUser(id);

    out_fp << "1.2. 회원탈퇴\n";
    out_fp << "> " << id << std::endl;
    out_fp << std::endl;
}


