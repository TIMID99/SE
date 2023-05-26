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
	ApplyStatics* applyStaticsControl = new ApplyStatics();
	ApplyStaticsUI* applyStaticsUI = applyStaticsControl->getInterfaceInstance();

	while (!is_program_exit) {
		in_fp >> menu_level_1 >> menu_level_2;

		switch (menu_level_1) {
			case 1: {
				switch (menu_level_2) {
					case 1: { // 1.1 회원가입 메뉴 부분
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
			}
			case 3: {
				switch (menu_level_2) {
					case 1: { // 3.1 채용 정보 등록

						break;
					}
					case 2: { // 3.2 등록된 채용 정보 조회

						break;
					}
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
			}
            case 5: {
                switch (menu_level_2) {
                    case 1: { // 5.1 지원 정보 통계
						applyStaticsUI->startInterface(out_fp);
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
