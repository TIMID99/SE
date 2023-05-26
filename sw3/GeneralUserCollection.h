#pragma once
#include "GeneralUser.h"
#include "Recruitment.h"
#include <string>
#include <vector>


class GeneralUserCollection
{
private:
    std::vector<GeneralUser> appliedGeneralUsers; // 벡터로 구현

public:
    GeneralUserCollection(); // 기본 생성자
};
