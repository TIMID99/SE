//
//  main.cpp
//  실습_state_machine
//
//  Created by 정지현 on 2023/05/20.
//

#include <stdio.h>
#include <string.h>

#include "SearchRecruitmentUI.h"
#include "SearchRecruitment.h"
#include "Company.h"
#include "Recruitment.h"


// 상수 선언
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// 함수 선언
void doTask();

void program_exit();

// 변수 선언
FILE* in_fp, *out_fp;

int main()
{
  // 파일 입출력을 위한 초기화
  FILE* in_fp = fopen(INPUT_FILE_NAME, "r+");
  FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");


  doTask();


  return 0;
}




void doTask()
{
  // 메뉴 파싱을 위한 level 구분을 위한 변수
  int menu_level_1 = 0, menu_level_2 = 0;
  int is_program_exit = 0;
    
  while(!is_program_exit)
  {
      // 입력파일에서 메뉴 숫자 2개를 읽기
      fscanf(in_fp, "%d %d ", &menu_level_1, &menu_level_2);
      
      
      // 메뉴 구분 및 해당 연산 수행
      switch(menu_level_1)
      {
          case 4:
          {
              switch(menu_level_2)
              {
                  case 1:   // "4.1 채용 정보 검색
                  {
                      // join() 함수에서 해당 기능 수행
                      searchRecruitment();
                      
                      break;
                  }
                  case 2:   // 4.2 채용 지원
                  {
                      ...
                      break;
                  }
                  case 4:   // 4.4 채용 취소
                  {
                      ...
                      break;
                  }
              }
          }
              
          case 6:
          {
              switch(menu_level_2)
              {
                  case 1:   // "6.1. 종료“ 메뉴 부분
                  {
                      
                      program_exit();
                      is_program_exit = 1;
                      break;;
                  }
              }
              
            }
              
              
          }
              
      }
      
      return;
  }
    


/**
 기능 : 채용 정보 검색
 입력 : 4 1 [회사이름]
 출력 : [회사이름] [사업자번호] [업무] [인원 수 ] [신청마감일]
 */
void searchRecruitment(in_fp,out_fp)
{
  /*            !!!!!!!       중요        !!!!!!!!!
   * 단순히 파일을 통해 입출력하는 방법을 보이기 위한 코드이므로 이 함수에서 그대로 사용하면 안됨.
   * control 및 boundary class를 이용해서 해당 기능이 구현되도록 해야 함.
   */

    char input[MAX_STRING];
//
//   // 입력 형식 : 이름, 주민번호, ID, Password를 파일로부터 읽음
    fscanf(in_fp, "%s", input);
    string companyName(input);
  
  // 해당 기능 수행
    
  //
    SearchRecruitment* searchEngine = new SearchRecruitment(companyName);
    SearchRecruitmentUI* searchUI = new SearchRecruitmentUI();
    
    searchUI->startIn
//    Recruitment* recruitmentList[200] = SearchRecruitment.showRecruitmentList(companyName);
    

    
   // 출력 형식
   fprintf(out_fp, "4.1. 채용정보 검색\n");
   fprintf(out_fp, "%s %s %s %s\n", name, SSN, ID, password);
}

