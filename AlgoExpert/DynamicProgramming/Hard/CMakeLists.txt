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

option(NumbersInPi_discover_tests "Add problem tests to a workflow" OFF)
add_subdirectory(numbers-in-pi)

option(MaximumSumSubmatrix_discover_tests "Add problem tests to a workflow" OFF)
add_subdirectory(maximum-sum-submatrix)

option(MaximizeExpression_discover_tests "Add problem tests to a workflow" OFF)
add_subdirectory(maximize-expression)

option(DiceThrows_discover_tests "Add problem tests to a workflow" OFF)
add_subdirectory(dice-throws)

option(JuiceBottling_discover_tests "Add problem tests to a workflow" OFF)
add_subdirectory(juice-bottling)
