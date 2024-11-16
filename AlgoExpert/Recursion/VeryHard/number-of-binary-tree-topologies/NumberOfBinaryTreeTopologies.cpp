// https://www.algoexpert.io/questions/number-of-binary-tree-topologies
//
// #Recursion
// #VeryHard

#include "NumberOfBinaryTreeTopologies.h"

namespace algoExpert::recursion {
    using std::to_string;

    void fork_nodes(
        const int max_nodes,
        int& topology_counter,
        int nodes_counter,
        const int level)
    {
        if (nodes_counter == max_nodes) return;
        ++nodes_counter;
        if (nodes_counter == max_nodes) {
            ++topology_counter;
            return;
        }

        const auto next_level = level + 1;
        const int nodes_remain = max_nodes - nodes_counter;
        for (int i_left = 0; i_left <= nodes_remain; ++i_left) {
            auto i_right = nodes_remain - i_left;
            const auto l_max= max_nodes-i_left;
            const auto r_max= max_nodes-i_right;
            if (i_left != 0 && i_right != 0) {
                int left_counter = 0, right_counter = 0;
                fork_nodes(l_max, left_counter, nodes_counter, next_level);
                fork_nodes(r_max, right_counter, nodes_counter, next_level);
                topology_counter += left_counter * right_counter;
            }
            else {
                fork_nodes(l_max, topology_counter, nodes_counter, next_level);
                fork_nodes(r_max, topology_counter, nodes_counter, next_level);
            }
        }
    }
    int numberOfBinaryTreeTopologies(int n)
    {
        if (n <= 1) return 1;
        int nodes_counter = 0;
        int topology_counter = 0;
        fork_nodes(n, topology_counter, nodes_counter,  0);
        return topology_counter;
    }
}
