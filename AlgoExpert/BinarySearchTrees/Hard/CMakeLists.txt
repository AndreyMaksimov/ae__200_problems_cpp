# AlgoExpert/BinarySearchTrees/Hard/CMakeLists.txt

option(SameBsts_discover_tests "Add problem tests to a workflow" OFF)
add_subdirectory(same-bsts)

option(ValidateThreeNodes_discover_tests "Add problem tests to a workflow" OFF)
add_subdirectory(validate-three-nodes)

option(RepairBst_discover_tests "Add problem tests to a workflow" OFF)
add_subdirectory(repair-bst)

option(SumBsts_discover_tests "Add problem tests to a workflow" OFF)
add_subdirectory(sum-bsts)
