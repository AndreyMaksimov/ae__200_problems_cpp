# AlgoExpert/LinkedLists/Medium/CMakeLists.txt

option(LinkedListConstruction_discover_tests "Add problem tests to a workflow" OFF)
add_subdirectory(linked-list-construction)

option(RemoveKthNodeFromEnd_discover_tests "Add problem tests to a workflow" OFF)
add_subdirectory(remove-kth-node-from-end)

option(SumOfLinkedLists_discover_tests "Add problem tests to a workflow" OFF)
add_subdirectory(sum-of-linked-lists)

option(MergingLinkedLists_discover_tests "Add problem tests to a workflow" ON)
add_subdirectory(merging-linked-lists)
