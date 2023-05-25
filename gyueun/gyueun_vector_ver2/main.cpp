#include "AppliedHistoryUI.h"
#include "AppliedHistory.h"
#include "ApplyStaticsUI.h"
#include "ApplyStatics.h"
#include "User.h"
#include <fstream>

// constant variables
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// functions
void doTask();
void program_exit();

std::ifstream in_fp(INPUT_FILE_NAME);
std::ofstream out_fp(OUTPUT_FILE_NAME);

int main() {
	// 파일 입출력을 위한 초기화

	doTask();


}

void doTask() {
	int menu_level_1 = 0, menu_level_2 = 0;
	int is_program_exit = 0;

	// 지원 정보 조회  boundary & control
	AppliedHistory* appliedHistoryControl = new AppliedHistory();
	AppliedHistoryUI* appliedHistoryUI = appliedHistoryControl->getInterfaceInstance();

	// 지원 정보 통계 boundary & control


	while (!is_program_exit) {
		in_fp >> menu_level_1 >> menu_level_2;

		switch (menu_level_1) {
			case 1: {
				switch (menu_level_2) {
					case 1: { // 1.1 회원가입 메뉴 부분
						// join() 함수에서 해당 기능 수행
						// SignUp signup(userdb);
						// signup.onLoad(in_fp, out_fp);
						break;
					}
					case 2: { // 1.2 회원탈퇴 메뉴 부분

						break;
					}
				}
			}
			case 2: {
				switch (menu_level_2) {
					case 1: { // 2.1 로그인 메뉴 부분
						// logIn() 함수에서 해당 기능 수행
						break;
					}
					case 2: { // 2.2 로그아웃 메뉴 부분

						break;
					}
			}
			case 3: {
				switch (menu_level_2) {
					case 1: { // 3.1 채용 정보 등록
						// logIn() 함수에서 해당 기능 수행
						break;
					}
					case 2: { // 3.2 등록된 채용 정보 조회

						break;
					}
			}
			case 4: {
				switch (menu_level_2) {
					case 1: { // 4.1 채용정보검색
						// logIn() 함수에서 해당 기능 수행
						break;
					}
					case 2: { // 4.2 채용 지원

						break;
					}
					case 3: { // 4.3 지원 정보 조회
						appliedHistoryUI->startInterface(out_fp);

						break;
					}
					case 4: { // 4.4 지원 취소

						break;
					}
			}
            case 5: {
                switch (menu_level_2) {
                    case 1: { // 5.1 지원 정보 통계

                        break;
                    }
                }
            }
			case 6: {
				switch (menu_level_2) {
					case 1: {
						program_exit();
						is_program_exit = 1;
						break;
					}
				}
			}
		}
	}
}


void program_exit(){
	return ;
}

// void join()    
// {
//   /*            !!!!!!!       중요        !!!!!!!!!
//    * 단순히 파일을 통해 입출력하는 방법을 보이기 위한 코드이므로 이 함수에서 그대로 사용하면 안됨.
//    * control 및 boundary class를 이용해서 해당 기능이 구현되도록 해야 함.
//    */

//    char user_type[MAX_STRING], name[MAX_STRING], SSN[[MAX_STRING], 
//         address[MAX_STRING], ID[MAX_STRING], password[MAX_STRING];

//    // 입력 형식 : 이름, 주민번호, ID, Password를 파일로부터 읽음
//    fscanf(in_fp, "%s %s %s %s", name, SSN, ID, password);

  
//   // 해당 기능 수행  
//    ...

//    // 출력 형식
//    fprintf(out_fp, "1.1. 회원가입\n");
//    fprintf(out_fp, "%s %s %s %s\n", name, SSN, ID, password);
// }