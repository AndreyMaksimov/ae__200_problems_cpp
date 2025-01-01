# AlgoExpert/Stacks/Medium/CMakeLists.txt


option(MinMaxStackConstruction_discover_tests "Add problem tests to a workflow" OFF)
add_subdirectory(min-max-stack-construction)

option(BalancedBrackets_discover_tests "Add problem tests to a workflow" OFF)
add_subdirectory(balanced-brackets)

option(SunsetViews_discover_tests "Add problem tests to a workflow" OFF)
add_subdirectory(sunset-views)

option(BestDigits_discover_tests "Add problem tests to a workflow" OFF)
add_subdirectory(best-digits)

option(SortStack_discover_tests "Add problem tests to a workflow" OFF)
add_subdirectory(sort-stack)

option(NextGreaterElement_discover_tests "Add problem tests to a workflow" OFF)
add_subdirectory(next-greater-element)

option(ReversePolishNotation_discover_tests "Add problem tests to a workflow" ON)
add_subdirectory(reversePolishNotation)
