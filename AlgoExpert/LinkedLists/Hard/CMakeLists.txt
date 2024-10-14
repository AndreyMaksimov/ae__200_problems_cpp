# AlgoExpert/LinkedLists/Hard/CMakeLists.txt


option(ReverseLinkedList_discover_tests "Add problem tests to a workflow" OFF)
add_subdirectory(reverse-linked-list)

option(FindLoop_discover_tests "Add problem tests to a workflow" OFF)
add_subdirectory(find-loop)

option(MergeLinkedLists_discover_tests "Add problem tests to a workflow" OFF)
add_subdirectory(merge-linked-lists)

option(ShiftLinkedList_discover_tests "Add problem tests to a workflow" OFF)
add_subdirectory(shift-linked-list)
