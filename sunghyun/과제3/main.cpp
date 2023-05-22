#include "signupui.h"
#include "userdb.h"
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
	UserDB* userdb = new UserDB();
	User* loginUser = new User(); // 로그인 후에 return 값으로 저장, 로그아웃 시 초기화

	while (!is_program_exit) {
		in_fp >> menu_level_1 >> menu_level_2;

		switch (menu_level_1) {
			case 1: {
				switch (menu_level_2) {
					case 1: { // 1.1 회원가입 메뉴 부분
						// join() 함수에서 해당 기능 수행
						SignUp signup(userdb);
						signup.onLoad(in_fp, out_fp);
						break;
					}
					case 2: { // 1.2 회원탈퇴 메뉴 부분

						break;
					}
				}
			}
			case 2: {

			}

			// ..
			case 6: {
				switch (menu_level_2) {
					case 1: {
						// ..
						program_exit();
						is_program_exit = 1;
						break;
					}
				}
			}
		}
	}
}


void program_exit() {
	return;
}