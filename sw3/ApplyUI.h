//
//  ApplyUI.h
//  실습_state_machine
//
//  Created by 정지현 on 2023/05/26.
//

#ifndef ApplyUI_h
#define ApplyUI_h

#include "Apply.h"
#include <iostream>
#include <fstream>

using namespace std;
class Apply;

class ApplyUI {
    Apply* applyControl;
public:
    ApplyUI(Apply*);
    void startInterface(ifstream&, ofstream&);
    bool login(string, string);
};
#endif /* ApplyUI_h */