#pragma once
#include "Company.h"
#include "Recruitment.h"
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

class CompanyRecruitmentCollection
{
private:
    vector<Recruitment> recruitments; // 벡터로 구현

public:
    CompanyRecruitmentCollection(); // 기본 생성자
    // Recruitment findFirst();
    // Recruitment getNext();
    int size();
    // string getCompanyName();
    // string getIdNum();

    // vector version
    void addRecruitment(string, string, string, int, string); // 채용 공고 등록
    void listRecruitments(); // 등록한 채용 공고 리스트 조회
    unordered_map<string, int> getTaskApplicantsCount();
};
