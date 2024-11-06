# AlgoExpert/Recursion/Hard/CMakeLists.txt


option(LowestCommonManager_discover_tests "Add problem tests to a workflow" OFF)
add_subdirectory(lowest-common-manager)

option(InterweavingStrings_discover_tests "Add problem tests to a workflow" OFF)
add_subdirectory(interweaving-strings)

option(SolveSudoku_discover_tests "Add problem tests to a workflow" OFF)
add_subdirectory(solve-sudoku)

option(GenerateDivTags_discover_tests "Add problem tests to a workflow" ON)
add_subdirectory(generate-div-tags)
