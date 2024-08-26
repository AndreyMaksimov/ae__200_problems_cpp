# AlgoExpert/FamousAlgorithms/Medium/CMakeLists.txt

option(KadanesAlgorithm_discover_tests "Add problem tests to a workflow" OFF)
add_subdirectory(kadanes-algorithm)

option(StableInternships_discover_tests "Add problem tests to a workflow" OFF)
add_subdirectory(stable-internships)

option(UnionFind_discover_tests "Add problem tests to a workflow" ON)
add_subdirectory(union-find)
