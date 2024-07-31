# AlgoExpert/DynamicProgramming/Hard/CMakeLists.txt

option(MaxSumIncreasingSubsequence_discover_tests "Add problem tests to a workflow" OFF)
add_subdirectory(max-sum-increasing-subsequence)

option(LongestCommonSubsequence_discover_tests "Add problem tests to a workflow" OFF)
add_subdirectory(longest-common-subsequence)

option(MinNumberOfJumps_discover_tests "Add problem tests to a workflow" OFF)
add_subdirectory(min-number-of-jumps)

option(WaterArea_discover_tests "Add problem tests to a workflow" OFF)
add_subdirectory(water-area)

option(KnapsackProblem_discover_tests "Add problem tests to a workflow" OFF)
add_subdirectory(knapsack-problem)

option(DiskStacking_discover_tests "Add problem tests to a workflow" ON)
add_subdirectory(disk-stacking)
