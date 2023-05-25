//
//  CompanyRecruitmentCollection.h
//  실습_state_machine
//
//  Created by 정지현 on 2023/05/24.
//

#ifndef CompanyRecruitmentCollection_h
#define CompanyRecruitmentCollection_h

class CompanyRecruitmentCollection{
private:
    Recruitment* companyRecuitmentList;
public:
    Recruitment* findFirst();
    Recruitment* getNext();
    void addRecruitment(Recruitment* recruitment);
    
}
#endif /* CompanyRecruitmentCollection_h */
