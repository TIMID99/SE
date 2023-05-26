//
//  ApplyUI.cpp
//  실습_state_machine
//
//  Created by 정지현 on 2023/05/26.
//

#include <fstream>
#include <iostream>
#include "ApplyUI.h"

using namespace std;

ApplyUI::ApplyUI(Apply* applyControl) : applyControl(applyControl) {}

void ApplyUI::startInterface(ifstream& in_fp, ofstream& out_fp) {
    string companyName, idNum, task;
    in_fp >> companyName >> idNum >> task;


    out_fp << "4.2. 채용지원\n";
    out_fp << "> " << companyName << " " << idNum << " " << task << endl;
    out_fp << std::endl;
}