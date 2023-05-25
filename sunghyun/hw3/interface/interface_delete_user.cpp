#include "interface_delete_user.h"
#include "collection_user.h"


DeleteUserUI::DeleteUserUI(DeleteUser* deleteUserControl)
	: deleteUserControl(deleteUserControl) {}

void DeleteUserUI::startInterface(std::ofstream& out_fp) {
    std::string id = UserCollection::getInstance()->getLastRegisteredId();

    deleteUserControl->deleteUserRequest(id);

    /*
     * 출력처리
     */
}


