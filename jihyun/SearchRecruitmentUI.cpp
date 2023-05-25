//
//  SearchRecruitmentUI.cpp
//  실습_state_machine
//
//  Created by 정지현 on 2023/05/24.
//


#include <iostream>
#include <string>
#include <fstream>

#include "SearchRecruitmentUI.h"
#include "SearchRecruitment.h"

SearchRecruitmentUI::SearchRecruitmentUI(SearchRecruitment* searchRecruitment): searchRecruitment(searchRecruitment){}

void SearchRecruitmentUI::startInterface(std::ifstream &in_fp, std::ofstream &out_fp){
    
    
    string companyName, companyIdNum;
    cout << "회사 이름으로 채용정보 검색 페이지 입니다." << endl;
    companyName = getCompanyName(in_fp);
    
    recruitmentList = searchRecruitment->showRecruitmentList(companyName);
    companyIdNum = searchRecruitment->getSearchingCompany()->getIdNum();
    
    out_fp << "4.1. 채용정보검색\n";
    
    for (int i = 0; i< recruitmentList.size(); i++){
        string task = recruitmentList[i]->getTask();
        int members = recruitmentList[i]->getNumOfMembers();
        string deadline = recruitmentList[i]->getDeadline();
        out_fp << companyName << " " << companyIdNum << task << " " <<members << " " << deadline << std::endl;
        
    }
    
    out_fp << std::endl;
}

string SearchRecruitmentUI::getCompanyName(std::ifstream &in_fp){
    
    string targetCompany;
    std::string companyName;
    in_fp >> companyName;
    targetCompany = companyName;
    
    return targetCompany;
}


