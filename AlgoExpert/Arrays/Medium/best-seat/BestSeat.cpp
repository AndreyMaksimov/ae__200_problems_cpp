// https://www.algoexpert.io/questions/best-seat
//
// #Arrays
// #Medium
// #std::pair

#include <utility>
#include "BestSeat.h"

namespace algoExpert::arrays {
    using std::pair;
    int bestSeat(vector<int> seats) {
        pair best_pair(-1, 0); // empty_seat_start, length
        bool empty_space_on = false;
        auto current_pair = best_pair;
        for(auto i = 0; i<seats.size(); ++i) {
            if (empty_space_on) {
                if (seats[i]) {
                    empty_space_on = false;
                    if (current_pair.second > best_pair.second) {
                        best_pair = current_pair;
                    }
                }
                else {
                    current_pair.second++;
                }
            }
            else {
                if (!seats[i]) {
                    empty_space_on = true;
                    current_pair.second = 1;
                    current_pair.first = i;
                }
            }
        }
        if (best_pair.first == -1) return -1;
        const auto result = (best_pair.first + (best_pair.second-1) / 2);
        return result;
    }
}
