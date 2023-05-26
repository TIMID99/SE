#pragma once
#include "ApplyStatics.h"
#include "GeneralUser.h"
#include "Company.h"
#include "User.h"
#include <fstream>

using namespace std;

class ApplyStatics;

class ApplyStaticsUI
{
private:
        ApplyStatics* applyStaticsControl;

public:
        ApplyStaticsUI(ApplyStatics*);
        void startInterface(ofstream&);
        void applyStatics(string); 
};

