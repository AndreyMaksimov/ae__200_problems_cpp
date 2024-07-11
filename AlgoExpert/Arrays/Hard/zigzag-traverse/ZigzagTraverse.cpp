// https://www.algoexpert.io/questions/zigzag-traverse
//
// #Arrays
// #Hard
// #Lambda

#include "ZigzagTraverse.h"

namespace algoExpert::arrays {
    vector<int> zigzagTraverse(vector<vector<int>> array) {
        if(array.empty()) return {};
        if (array.size() == 1) return array[0];

        auto value = [&](const int x, const int y) {
            return array[y][x];
        };
        const int W = array[0].size();
        const int H = array.size();
        int x = 0, y = 0;
        vector<int> result(W*H);
        int ir = 0;

        auto down = [&]() {
            if ((y+1) < H) {
                result[ir++] = value(x,++y);
                return true;
            }
            return false;
        };
        auto up_right = [&]() {
            if ((y-1) >= 0 && (x+1) < W) {
                result[ir++] = value(++x,--y);
                return true;
            }
            return false;
        };
        auto right = [&]() {
            if ((x+1) < W) {
                result[ir++] = value(++x,y);
                return true;
            }
            return false;
        };
        auto down_left = [&]() {
            if ((y+1) < H && (x-1) >= 0) {
                result[ir++] = value(--x,++y);
                return true;
            }
            return false;
        };

        result[ir++] = value(0, 0);
        while(ir < result.size()) {
            // step to down (or to right if no way to down)
            if (!down()) right();

            // loop over up-right
            while (up_right());

            // step to right (or to down if no way to right)
            if(!right()) down();

            // loop over down-left
            while (down_left());
        }
        return result;
    }
}
