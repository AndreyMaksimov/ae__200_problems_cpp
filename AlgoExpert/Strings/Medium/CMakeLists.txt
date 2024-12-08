# AlgoExpert/Strings/Medium/CMakeLists.txt


option(LongestPalindromicSubstring_discover_tests "Add problem tests to a workflow" OFF)
add_subdirectory(longest-palindromic-substring)

option(GroupAnagrams_discover_tests "Add problem tests to a workflow" OFF)
add_subdirectory(group-anagrams)

option(ValidIpAddresses_discover_tests "Add problem tests to a workflow" ON)
add_subdirectory(valid-ip-addresses)
