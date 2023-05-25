#pragma once
#include "GeneralUser.h"
#include "Recruitment.h"
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

class GeneralUserRecruitmentCollection
{
private:
    vector<Recruitment> recruitments; // 벡터로 구현

public:
    GeneralUserRecruitmentCollection(); // 기본 생성자
    // Recruitment findFirst();
    // Recruitment getNext();
    int size();
    void addApply(string);
    void removeApply(string);
    void listApplies();
    // 지원 정보 통계 추가
};


