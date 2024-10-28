// https://www.algoexpert.io/questions/lowest-common-manager
//
// #Recursion
// #Hard

#include "LowestCommonManager.h"

namespace algoExpert::recursion {
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

    OrgChart* getLowestCommonManager(
      OrgChart* topManager, OrgChart* reportOne, OrgChart* reportTwo
    ) {
        // Write your code here.
        return nullptr;
    }
}
