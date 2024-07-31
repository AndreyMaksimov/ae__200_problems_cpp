# AlgoExpert/DynamicProgramming/VeryHard/CMakeLists.txt

option(MaxProfitWithKTransactions_discover_tests "Add problem tests to a workflow" OFF)
add_subdirectory(max-profit-with-k-transactions)

option(PalindromePartitioningMinCuts_discover_tests "Add problem tests to a workflow" OFF)
add_subdirectory(palindrome-partitioning-min-cuts)

option(LongestIncreasingSubsequence_discover_tests "Add problem tests to a workflow" OFF)
add_subdirectory(longest-increasing-subsequence)

option(LongestStringChain_discover_tests "Add problem tests to a workflow" ON)
add_subdirectory(longest-string-chain)
