//
//  main.cpp
//  실습_state_machine
//
//  Created by 정지현 on 2023/05/20.
//


#include <string>
#include <fstream>

#include "SearchRecruitmentUI.h"
#include "SearchRecruitment.h"

#include "interface_delete_user.h"
#include "interface_login.h"
#include "interface_logout.h"
#include "control_signup.h"
#include "control_delete_user.h"
#include "control_login.h"
#include "control_logout.h"
#include "user.h"
#include "interface_signup.h"

// 상수 선언
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// 함수 선언
void doTask();

void program_exit();

// 변수 선언
std::ifstream in_fp(INPUT_FILE_NAME);
std::ofstream out_fp(OUTPUT_FILE_NAME);

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
    
    SignUp* signUpControl = new SignUp();
    SignUpUI* signUpUI = signUpControl->getInterfaceInstance();

    // 회원탈퇴 boundary & control
    DeleteUser* deleteUserControl = new DeleteUser();
    DeleteUserUI* deleteUserUI = deleteUserControl->getInterfaceInstance();

    // 로그인 boundary & control
    Login* loginControl = new Login();
    LoginUI* loginUI = loginControl->getInterfaceInstance();

    // 로그아웃 boundary & control
    Logout* logoutControl = new Logout();
    LogoutUI* logoutUI = logoutControl->getInterfaceInstance();
    // 채용정보 검색
    SearchRecruitment* searchEngine = new SearchRecruitment();
   SearchRecruitmentUI* searchUI = searchEngine->getInterfaceInstance();
    
  // 채용 지원
    
  while(!is_program_exit)
  {
      // 입력파일에서 메뉴 숫자 2개를 읽기
      in_fp >> menu_level_1 >> menu_level_2;
      
      // 메뉴 구분 및 해당 연산 수행
      switch(menu_level_1)
      {
            
          case 1: {
              switch (menu_level_2) {
                  case 1: { // 1.1 회원가입 메뉴 부분
                      signUpUI->startInterface(in_fp, out_fp);
                      break;
                  }
                  case 2: { // 1.2 회원탈퇴 메뉴 부분
                      deleteUserUI->startInterface(out_fp);
                      break;
                  }
              }
              break;
          }
              
          case 2: {
              switch (menu_level_2) {
                  case 1: {
                      loginUI->startInterface(in_fp, out_fp);
                      break;
                  }
                  case 2: {
                      logoutUI->startInterface(out_fp);
                      break;
                  }

              }
          case 4:
          {
              switch(menu_level_2)
              {
                  case 1:   // "4.1 채용 정보 검색
                  {
                      // join() 함수에서 해당 기능 수행
                      searchUI->startInterface(in_fp, out_fp);
                      break;
                      
                  }
                  case 2:   // 4.2 채용 지원
                  {
                      
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
    


