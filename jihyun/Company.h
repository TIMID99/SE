//
//  Company.h
//  실습_state_machine
//
//  Created by 정지현 on 2023/05/24.
//
#ifndef Company_h
#define Company_h

#include <iostream>
#include <vector>

#include "user.h"
#include "Recruitment.h"

using namespace std;

class Company : public User{
    
private:
    
    vector<Recruitment*> recruitmentList;
    
public:
    
    vector<Recruitment*> getRecruitmentList();
    string getName();
    string getIdNum();

    // 채용 정보 등록
    void addRecruitment(); //
    void addRecruitment(string, int, string); // boundary -> control 거쳐서 온 task, numOfMembers, deadline로 recruitment 생성할 때
    void addRecruitment(Recruitment); // 이미 생성된 recruitment를 받아와서 추가할 때
    
    void listRecruitments(); // 등록된 채용 정보 조회
    virtual void applyStatics(ofstream&); // 지원 정보 통계 for 회사 회원
};

#endif Company_H
