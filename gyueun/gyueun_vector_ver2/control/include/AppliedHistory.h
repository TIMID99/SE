#pragma once
#include "GeneralUser.h"
#include "AppliedHistoryUI.h"
#include <string>
#include <iostream>
#include <fstream>

class AppliedHistory
{
private:
        AppliedHistoryUI* appliedHistoryUI;

public:
        AppliedHistory();
        AppliedHistoryUI* getInterfaceInstance();
        void appliedHistoryRequest(string);
};

