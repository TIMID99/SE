#pragma once
#include "User.h"
#include "GeneralUserRecruitmentCollection.h"
#include <string>

using namespace std;


/*  User의 subclass인 GeneralUser
 *  채용 정보 검색, 채용 지원, 지원 내역 조회, 지원 취소, 지원 정보 통계
 */
class GeneralUser : public User
{

private:
    GeneralUserRecruitmentCollection appliedRecruitmentCollection;

public:
    GeneralUser();
    GeneralUser(int, string, string, string, string);
    void searchRecruitment(string);
    void addApplies(string);
    void removeApplies(string);
    void listApplies(ofstream&);
    // void sortByCompName();
    virtual void applyStatics(ofstream&);
};

