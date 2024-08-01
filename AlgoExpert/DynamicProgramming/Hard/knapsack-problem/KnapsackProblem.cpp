// https://www.algoexpert.io/questions/knapsack-problem
//
// #DynamicProgramming
// #Hard

#include "KnapsackProblem.h"

namespace algoExpert::dynamicProgramming {

    // class Item {
    // public:
    //     int value;
    //     int weight;
    //     Item() = delete;
    //     explicit Item(const vector<int>& v ) :
    //     value(v[0]),
    //     weight(v[1])
    //     {}
    // };
    // class Cell {
    //     vector<
    // } cell_t;

    // each cell will contain list (vector) of items indicies
    typedef vector<int> cell_t;

    vector<vector<int>> knapsackProblem(vector<vector<int>> items, int capacity) {
        const auto item1 = items[0];
        const auto value1 = item1[0];
        const auto weight1 = item1[1];

        cell_t empty_cell;
        const auto nitems = static_cast<int>(items.size());
        vector<vector<cell_t>> mem((nitems+1), vector<cell_t>(capacity+1));


        // fill in 1-st line
        for (int i=1; i<=capacity; ++i) {
            if (weight1 <= i) {
                auto item = empty_cell;
                item.push_back(0);
                mem[1][i] = item;
            }
            else {
                mem[1][i] = empty_cell;
            }
        }

        auto cell_value = [&items](cell_t& c) {
            int v = 0;
            for(const auto i: c) {
                v += items[i][0];
            }
            return v;
        };

        for (int i = 2; i<=nitems ; ++i) {
            for (int j=1; j<=capacity; ++j) {
                auto above_cell = mem[i-1][j];
                auto current_item = items[i-1];
                auto current_value = current_item[0];
                auto current_weight = current_item[1];
                auto left_j = j - current_weight;
                if (left_j < 1) {
                    mem[i][j] = mem[i-1][j];
                }
                else {
                    auto left_cell = mem[i-1][left_j];
                    auto left_cell_value = cell_value(left_cell);
                    auto abov_cell_value = cell_value(above_cell);
                    if (left_cell_value + current_value > abov_cell_value) {
                        left_cell.push_back(i-1);
                        mem[i][j] = left_cell;
                    }
                    else {
                        mem[i][j] = mem[i-1][j];
                    }
                }
            }
        }

        auto indices = mem[nitems][capacity];
        auto answ = cell_value(indices);

        return {
        {answ},    // total value
        indices,  // item indices
      };
    }
}
