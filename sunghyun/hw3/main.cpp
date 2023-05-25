#include <fstream>
#include "interface_signup.h"
#include "interface_delete_user.h"
#include "interface_login.h"
#include "interface_logout.h"
#include "control_signup.h"
#include "control_delete_user.h"
#include "control_login.h"
#include "control_logout.h"
#include "user.h"

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
	// 회원가입  boundary & control
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

	while (!is_program_exit) {
		in_fp >> menu_level_1 >> menu_level_2;

		switch (menu_level_1) {
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
				break;
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
				break;
			}
		}
	}
}


void program_exit() {
	out_fp << "6.1. 종료\n";
	return;
}