# AlgoExpert/DynamicProgramming/Medium/CMakeLists.txt

option(MaxSubsetSumNoAdjacent_discover_tests "Add problem tests to a workflow" OFF)
add_subdirectory(max-subset-sum-no-adjacent)

option(NumberOfWaysToMakeChange_discover_tests "Add problem tests to a workflow" OFF)
add_subdirectory(number-of-ways-to-make-change)

option(MinNumberOfCoinsForChange_discover_tests "Add problem tests to a workflow" OFF)
add_subdirectory(min-number-of-coins-for-change)

option(LevenshteinDistance_discover_tests "Add problem tests to a workflow" ON)
add_subdirectory(levenshtein-distance)
