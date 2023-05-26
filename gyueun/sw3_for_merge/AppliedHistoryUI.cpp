#include "AppliedHistoryUI.h"
#include "SessionCollection.h"

AppliedHistoryUI::AppliedHistoryUI(AppliedHistory* appliedHistory)
    : appliedHistoryControl(appliedHistory) {}


void AppliedHistoryUI::startInterface(std::ofstream &out_fp)
{
    string id = SessionCollection::getInstance()->getLastSession();
    appliedHistory(id);

    /*
     * 출력 작성
     */
}

void AppliedHistoryUI::appliedHistory(string id)
{
    // 세션 로그인 유저 id 받아 처리하는 것으로 수정
    appliedHistoryControl->appliedHistoryRequest(id);
}





