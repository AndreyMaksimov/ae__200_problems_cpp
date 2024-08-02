// https://www.algoexpert.io/questions/knapsack-problem
//
// #DynamicProgramming
// #Hard
//
// https://skillbox.ru/media/code/dinamicheskoe_programmirovanie_eto_prosto_reshaem_zadachu_o_ryukzake/
//

#include "KnapsackProblem.h"

namespace algoExpert::dynamicProgramming {
    vector<vector<int>> knapsackProblem(vector<vector<int>> items, int capacity) {
        // each cell will contain list (vector) of items indicies
        typedef vector<int> cell_t;
        const auto nitems = static_cast<int>(items.size());

        // create "memoization" matrix
        vector<vector<cell_t>> mem((nitems+1), vector<cell_t>(capacity+1));

        // fill in 1-st matrix row by 1-st item
        const auto item0_weight = items[0][1];
        for (int i=1; i<=capacity; ++i) {
            if (item0_weight <= i) {
                auto& cell = mem[1][i];
                cell.push_back(0);
            }
        }

        // helper function to sum up cell items (their values)
        auto cell_value = [&items](const cell_t& cell) {
            int sum_value = 0;
            for(const auto i: cell) {
                sum_value += items[i][0];
            }
            return sum_value;
        };

        for (int i = 2; i<=nitems ; ++i) {
            const auto current_item_index = i - 1;
            const auto& current_item = items[current_item_index];
            const auto& current_value = current_item[0];
            const auto& current_weight = current_item[1];
            for (int j=1; j<=capacity; ++j) {
                auto& current_cell = mem[i][j];
                const auto& cell_above = mem[i-1][j];
                const auto left_j = j - current_weight;
                if (left_j < 0) {
                    current_cell = cell_above;
                }
                else {
                    const auto& cell_above_left = mem[i-1][left_j];
                    const auto above_left_value = cell_value(cell_above_left);
                    const auto above_value = cell_value(cell_above);
                    if ( (above_left_value + current_value) > above_value) {
                        // actually here we do: current_cell = cell_above_left + current_item
                        current_cell = cell_above_left;
                        current_cell.push_back(current_item_index);
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
        {answ_value},  // total value
        answ_indices,  // item indices
      };
    }
}
