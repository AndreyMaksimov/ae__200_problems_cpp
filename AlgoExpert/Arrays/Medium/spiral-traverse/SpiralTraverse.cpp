// https://www.algoexpert.io/questions/spiral-traverse
//
// #Arrays
// #Medium

#include <type_traits>
#include "SpiralTraverse.h"

namespace algoExpert::arrays {
    vector<int> spiralTraverse(vector<vector<int>> array) {
        const auto W = array[0].size();
        const auto H = array.size();

        vector<int> result(W*H);
        auto pos = result.begin();

        std::remove_const<decltype(W)>::type x0 = 0;
        std::remove_const<decltype(W)>::type x1 = W-1;
        std::remove_const<decltype(H)>::type y0 = 0;
        std::remove_const<decltype(H)>::type y1 = H-1;

        auto val_xy = [array](int x, int y) {return array[y][x];};

        int dx = 1;
        int dy = 0;
        int x = 0;
        int y = 0;
        while (pos != result.end()) {
            *pos = val_xy(x, y);

            if (dx != 0) {
                if (dx > 0) {
                    if (x == x1) {
                        dy = 1;
                        dx = 0;
                        ++y0;
                    }
                }
                if (dx < 0) {
                    if (x == x0) {
                        dy = -1;
                        dx = 0;
                        --y1;
                    }
                }
            }
            else{
                if (dy > 0) {
                    if (y == y1) {
                        dx = -1;
                        dy = 0;
                        --x1;
                    }
                }
                if (dy < 0) {
                    if (y == y0) {
                        dx = 1;
                        dy = 0;
                        ++x0;
                    }
                }
            }
            x += dx;
            y += dy;
            ++pos;
        }
        return result;
    }
}
