// https://www.algoexpert.io/questions/number-of-binary-tree-topologies
//
// #Recursion
// #VeryHard

// TODO: Investigate & learn points, hints, solutions suggested by AE (cache, memoization, iterative approaches)

#include "NumberOfBinaryTreeTopologies.h"

namespace algoExpert::recursion {
    using std::to_string;

    void fork_nodes(
        const int max_nodes,
        int& topology_counter,
        int nodes_counter,
        const int level)
    {
        ++nodes_counter;
        if (nodes_counter == max_nodes) {
            ++topology_counter;
            return;
        }
        const auto next_level = level + 1;

        // Calculation includes 2 parts

        // 1) Side part. All nodes are right on one side from a parent node. Left or Right
        int side_topology_counter = 0;
        fork_nodes(max_nodes, side_topology_counter, nodes_counter, next_level);
        topology_counter += 2 * side_topology_counter; // Sure number on Left = number on Right. So we take it twice

        // 2) Middle part. Some nodes are on the left from a parent, some on the right
        const int nodes_remain = max_nodes - nodes_counter;
        for (int i_left = 1; i_left < nodes_remain; ++i_left) {
            const auto i_right = nodes_remain - i_left;
            const auto l_max= max_nodes-i_left;
            const auto r_max= max_nodes-i_right;
            int left_counter = 0, right_counter = 0;
            fork_nodes(l_max, left_counter, nodes_counter, next_level);
            fork_nodes(r_max, right_counter, nodes_counter, next_level);
            topology_counter += left_counter * right_counter;
        }

    }
    int numberOfBinaryTreeTopologies(int n)
    {
        if (n <= 1) return 1;
        int topology_counter = 0;
        fork_nodes(n, topology_counter, 0,  0);
        return topology_counter;
    }
}
