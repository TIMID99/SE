#include <fstream>
#include "SignUpUI.h"
#include "DeleteUserUI.h"
#include "LoginUI.h"
#include "LogoutUI.h"
#include "SignUp.h"
#include "DeleteUser.h"
#include "Login.h"
#include "Logout.h"
#include "User.h"

// constant variables
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// functions
void doTask();
void program_exit();

// file pointers
std::ifstream in_fp(INPUT_FILE_NAME);
std::ofstream out_fp(OUTPUT_FILE_NAME);


int main() {
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
                    case 1: { // 2.1 로그인 메뉴 부분
                        loginUI->startInterface(in_fp, out_fp);
                        break;
                    }
                    case 2: { // 2.2 로그아웃 메뉴 부분
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
						// 6.1 종료 메뉴 부분
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