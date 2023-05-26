//
//  SearchRecruitment.cpp
//  실습_state_machine
//
//  Created by 정지현 on 2023/05/24.
//
#include <iostream>
#include <string>
#include <vector>

#include "SearchRecruitment.h"
#include "SearchRecruitmentUI.h"
#include "Recruitment.h"
#include "Company.h"
#include "CompanyCollection.h"



SearchRecruitment::SearchRecruitment() {
    searchRecruitmentUI = new SearchRecruitmentUI(this);
}

SearchRecruitmentUI* SearchRecruitment::getInterfaceInstance() {
    return this->searchRecruitmentUI;
}

//
vector<Recruitment*> SearchRecruitment::showRecruitmentList(string companyName) {

    Company* curCompany = CompanyCollection::getInstance()->findFirst();
    int numOfCompanies = CompanyCollection::getInstance()->getSize();

    Company* company;
    bool ifExists = false;

    // 검색어랑 일치하는 회사 찾기
    for (int i = 0; i < numOfCompanies; i++) {
        if (company->getName() == companyName) {
            ifExists = true;
            curCompany = company;
        }
        else if (i < numOfCompanies - 1) {
            curCompany = CompanyCollection::getInstance()->getNext(i);
        }
    }

    // 해당 회사 채용리스트 반환
    recruitmentList = curCompany->getRecruitmentList();

    // 회사 이름으로 정렬하여 UI로 전달

    sort(recruitmentList.begin(), recruitmentList.end(), comp);
    return recruitmentList;

}

vector<Recruitment*> SearchRecruitment::showRecruitmentList(string companyName) {

    Company* curCompany = CompanyCollection::getInstance()->findFirst();
    int numOfCompanies = CompanyCollection::getInstance()->getSize();

    Company* company;
    bool ifExists = false;

    // 검색어랑 일치하는 회사 찾기
    for (int i = 0; i < numOfCompanies; i++) {
        if (company->getName() == companyName) {
            ifExists = true;
            curCompany = company;
        }
        else if (i < numOfCompanies - 1) {
            curCompany = CompanyCollection::getInstance()->getNext(i);
        }
    }

    // 해당 회사 채용리스트 반환
    recruitmentList = curCompany->getRecruitmentList();
    this->company = curCompany;

    // 회사 이름으로 정렬하여 UI로 전달
    // 직무 기준 검색이 사라져서 해당 기능 생략
//
//    sort(recruitmentList.begin(),recruitmentList.end(), comp);
    return recruitmentList;

}

Company* SearchRecruitment::getSearchingCompany() {
    return *company;
}

bool comp(Company* companyA, Company* companyB) {
    return companyA->getName() < companyB->getName();
}
