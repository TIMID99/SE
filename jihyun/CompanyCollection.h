//
//  CompanyCollection.h
//  실습_state_machine
//
//  Created by 정지현 on 2023/05/26.
//

#ifndef CompanyCollection_h
#define CompanyCollection_h

#include <vector>
#include "Company.h"

using namespace std;

class CompanyCollection{
    
private:
    vector<Company*> companyList;
    static CompanyCollection* isInstance;
public:
    
    static CompanyCollection* getInstance();
    Company* findFirst();
    Company* getNext(int currentIndex);
    
    int getSize();
};
#endif /* CompanyCollection_h */
