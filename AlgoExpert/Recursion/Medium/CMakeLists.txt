# AlgoExpert/Recursion/Medium/CMakeLists.txt


option(Permutations_discover_tests "Add problem tests to a workflow" OFF)
add_subdirectory(permutations)

option(Powerset_discover_tests "Add problem tests to a workflow" OFF)
add_subdirectory(powerset)

option(PhoneNumberMnemonics_discover_tests "Add problem tests to a workflow" OFF)
add_subdirectory(phone-number-mnemonics)

option(StaircaseTraversal_discover_tests "Add problem tests to a workflow" OFF)
add_subdirectory(staircase-traversal)

option(BlackjackProbability_discover_tests "Add problem tests to a workflow" OFF)
add_subdirectory(blackjack-probability)

option(RevealMinesweeper_discover_tests "Add problem tests to a workflow" ON)
add_subdirectory(reveal-minesweeper)
