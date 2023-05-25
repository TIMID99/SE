//
//  RecruitmentInfoSystem.cpp
//  실습_state_machine
//
//  Created by 정지현 on 2023/05/24.
//
#include <iostream>
#include "RecruitmentInfoSystem.h"
#include "SearchRecruitment.h"

using namespace std;

void RecruitmentInfoSystem::run(){
    int option;
    cout << "1. 채용 정보 검색" << endl;
    cout << "2. 채용 지원" << endl;
    cout << "3. 채용 취소" << endl;
    cout << "4. Quit" << endl;
    cout << "Select an event # : ";

    // 사용자로부터 이벤트 입력받음
    cin >> option;

    // 입력 값에 따라 반환할 이벤트 값을 결정함
    switch (option)
    {
    case 1:
        SearchRecruitment searchRecruitment;
        break;
    case 2:
        
        break;
    case 3:
        
        break;
    case 4:
    default :
      
    }

}
