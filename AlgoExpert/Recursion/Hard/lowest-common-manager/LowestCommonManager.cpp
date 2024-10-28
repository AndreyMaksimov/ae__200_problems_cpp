// https://www.algoexpert.io/questions/lowest-common-manager
//
// #Recursion
// #Hard

#include <list>
#include "LowestCommonManager.h"

namespace algoExpert::recursion {
    using std::list;
    class OrgChart {
    public:
        char name;
        vector<OrgChart*> directReports;

        OrgChart(char name) {
            this->name = name;
            this->directReports = {};
        }

        void addDirectReports(vector<OrgChart*> directReports);
    };

    bool find_reporter(OrgChart* pMgr, OrgChart* pReporter, list<OrgChart*>& listTo) {
        for (auto rp : pMgr->directReports) {
            if ( (rp == pReporter) || find_reporter(rp, pReporter, listTo)) {
                listTo.push_front(rp); // we will save way from top manager to the reporter
                return true;
            }
        }
        return false;
    }

    OrgChart* getLowestCommonManager(
      OrgChart* topManager, OrgChart* reportOne, OrgChart* reportTwo)
    {
        list<OrgChart*> listOne;
        list<OrgChart*> listTwo;

        find_reporter(topManager, reportOne, listOne);
        find_reporter(topManager, reportTwo, listTwo);

        auto rp1 = listOne.begin();
        auto rp2 = listTwo.begin();
        auto answ = topManager;
        while (rp1 != listOne.end() && rp2 != listTwo.end()) {
            if (*rp1 != *rp2) break;
            answ = *rp1++;
            ++rp2;
        }
        return answ;
    }
}
