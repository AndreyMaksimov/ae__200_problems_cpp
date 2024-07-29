# AlgoExpert/BinarySearchTrees/Medium/CMakeLists.txt

option(BstConstruction_discover_tests "Add problem tests to a workflow" OFF)
add_subdirectory(bst-construction)

option(ValidateBst_discover_tests "Add problem tests to a workflow" OFF)
add_subdirectory(validate-bst)

option(BstTraversal_discover_tests "Add problem tests to a workflow" OFF)
add_subdirectory(bst-traversal)

option(MinHeightBst_discover_tests "Add problem tests to a workflow" OFF)
add_subdirectory(min-height-bst)

option(FindKthLargestValueInBst_discover_tests "Add problem tests to a workflow" OFF)
add_subdirectory(find-kth-largest-value-in-bst)

option(ReconstructBst_discover_tests "Add problem tests to a workflow" OFF)
add_subdirectory(reconstruct-bst)
