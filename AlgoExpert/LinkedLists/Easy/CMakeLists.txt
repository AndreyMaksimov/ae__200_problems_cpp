# AlgoExpert/LinkedLists/Easy/CMakeLists.txt

option(RemoveDuplicatesFromLinkedList_discover_tests "Add problem tests to a workflow" OFF)
add_subdirectory(remove-duplicates-from-linked-list)

option(MiddleNode_discover_tests "Add problem tests to a workflow" OFF)
add_subdirectory(middle-node)

option(LinkedListConstruction_discover_tests "Add problem tests to a workflow" ON)
add_subdirectory(linked-list-construction)
