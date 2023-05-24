#include "GeneralUserRecruitmentCollection.h"

// 생성자
GeneralUserRecruitmentCollection::GeneralUserRecruitmentCollection()
{
    Recruitment* appliedRecruitment = new Recruitment[200];
    this->appliedRecruitment = appliedRecruitment;
    recruitmentNum = 0;
}

// 채용 지원 시 GeneralUserRecruitmentCollection
void GeneralUserRecruitmentCollection::addNewRecruitment(Recruitment recruitment)
{
    appliedRecruitment[recruitmentNum++] = recruitment;
}

// 지원 취소 시 GeneralUserRecruitmentCollection
void GeneralUserRecruitmentCollection::deleteRecruitment(Recruitment recruitment)
{
    
}

Recruitment GeneralUserRecruitmentCollection::findFirst()
{
    this->appliedRecruitment = &(appliedRecruitment[0]);
    return (*appliedRecruitment);
}

Recruitment GeneralUserRecruitmentCollection::getNext()
{
    this->appliedRecruitment += 1;
    return (*appliedRecruitment);
}


int GeneralUserRecruitmentCollection::size() {
	return recruitmentNum;
}




