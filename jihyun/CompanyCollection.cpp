//
//  CompanyCollection.cpp
//  실습_state_machine
//
//  Created by 정지현 on 2023/05/26.
//

#include <iostream>
#include <vector>

#include "Company.h"
#include "CompanyCollection.h"

CompanyCollection* CompanyCollection::isInstance = nullptr;

CompanyCollection* CompanyCollection::getInstance() {
    if (isInstance == nullptr) {
        isInstance = new CompanyCollection();
    }
    return isInstance;
}

Company* CompanyCollection::findFirst(){
    return companyList[0];
}

Company* CompanyCollection::getNext(int currentIndex){
    return companyList[currentIndex + 1];
}

int CompanyCollection::getSize(){
    return companyList.size();
}
