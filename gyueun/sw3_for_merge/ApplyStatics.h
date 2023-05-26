#pragma once
#include "GeneralUser.h"
#include "Company.h"
#include "User.h"
#include "AppliedHistoryUI.h"
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

class ApplyStatics
{
private:
        ApplyStaticsUI* applyStaticsUI;

public:
        ApplyStatics();
        ApplyStaticsUI* getInterfaceInstance();
        void applyStaticsRequest(string);
};

