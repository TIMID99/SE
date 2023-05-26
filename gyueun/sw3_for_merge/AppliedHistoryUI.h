#include "AppliedHistory.h"
#include <fstream>

using namespace std;

class AppliedHistory;

class AppliedHistoryUI {
private:
        AppliedHistory* appliedHistoryControl;

public:
        AppliedHistoryUI(AppliedHistory*);
        void startInterface(ofstream&);
        void appliedHistory(string); 
};
