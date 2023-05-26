#include "GeneralUser.h"
#include "GeneralUserRecruitmentCollection.h"

GeneralUser::GeneralUser()
    : User() {}

GeneralUser::GeneralUser(int userType, std::string id, std::string password, std::string name, std::string idNum)
	: User(userType, id, password, name, idNum) {
    appliedRecruitmentCollection = GeneralUserRecruitmentCollection();
}

// 회사 이름으로 채용 공고 검색
void GeneralUser::searchRecruitment(string companyName)
{

}

// 채용 지원
void GeneralUser::addApplies(string inputtedIdNum)
{
    appliedRecruitmentCollection.addApply(inputtedIdNum);
}

// 지원 취소
void GeneralUser::removeApplies(string inputtedIdNum)
{
    appliedRecruitmentCollection.removeApply(inputtedIdNum);
}

// 지원 내역 조회
void GeneralUser::listApplies(ofstream& out_fp)
{
    appliedRecruitmentCollection.listApplies(out_fp);
}

void GeneralUser::applyStatics(ofstream& out_fp)
{
    out_fp << "5.1. 지원 정보 통계\n";
    unordered_map<string, int> taskApplicantsCount = appliedRecruitmentCollection.getTaskApplicantsCount();

    for (const auto& pair : taskApplicantsCount)
    {
        out_fp << pair.first << " " << pair.second << endl;
    }
}

