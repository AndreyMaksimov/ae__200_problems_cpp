// https://www.algoexpert.io/questions/knapsack-problem
//
// #DynamicProgramming
// #Hard

#include "KnapsackProblem.h"

namespace algoExpert::dynamicProgramming {

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

        auto cell_value = [&items](const cell_t& cell) {
            int v = 0;
            for(const auto i: cell) {
                v += items[i][0];
            }
            return v;
        };

        for (int i = 2; i<=nitems ; ++i) {
            for (int j=1; j<=capacity; ++j) {
                auto& current_cell = mem[i][j];
                const auto& cell_above = mem[i-1][j];
                const auto& current_item = items[i-1];
                const auto& current_value = current_item[0];
                const auto& current_weight = current_item[1];
                const auto left_j = j - current_weight;
                if (left_j < 0) {
                    current_cell = cell_above;
                }
                else {
                    const auto& cell_above_left = mem[i-1][left_j];
                    const auto above_left_value = cell_value(cell_above_left);
                    const auto above_value = cell_value(cell_above);
                    if ( (above_left_value + current_value) > above_value) {
                        auto new_ij_cell = cell_above_left;
                        // actually here we do: new_ij_cell = cell_above_left + current_cell
                        new_ij_cell.push_back(i-1);
                        current_cell = new_ij_cell;
                    }
                    else {
                        current_cell = cell_above;
                    }
                }
            }
        }

        const auto& answ_indices = mem[nitems][capacity];
        const auto answ_value = cell_value(answ_indices);

        return {
        {answ_value},    // total value
        answ_indices,  // item indices
      };
    }
}
