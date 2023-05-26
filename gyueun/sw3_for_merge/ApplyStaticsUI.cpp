#include "ApplyStaticsUI.h"
#include "SessionCollection"
#include <fstream>

ApplyStaticsUI::ApplyStaticsUI(ApplyStatics* applyStatics)
    : applyStaticsControl(applyStatics) {}

void ApplyStaticsUI::startInterface(ofstream& out_fp)
{
    string id = SessionCollection::getInstance()->getLastSession();
    
    // 세션 id에 해당하는 유저 받고 userType 확인 후 applyStatics()
    applyStatics(id);

    /*
     * 출력 작성
     */
}

