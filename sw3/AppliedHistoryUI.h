#pragma once
#include "AppliedHistory.h"
#include <fstream>

using namespace std;

class AppliedHistoryUI
{
private:
    AppliedHistory* appliedHistoryControl;

public:
    AppliedHistoryUI(AppliedHistory*);
    void appliedHistoryInsert(ofstream&);
    void startInterface(ofstream&);
};
