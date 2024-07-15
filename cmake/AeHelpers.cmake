
# This function assumes that there are 3 files in a directory related to the problem:
# 1) problem_name.cpp
# 2) problem_name.h
# 3) problem_name_test.cpp
function(add_tests_for_problem problem_name)
    set(problem_test_exe ${problem_name}_test.exe)

    add_executable(${problem_test_exe})

    target_sources(${problem_test_exe} PUBLIC
            ${problem_name}.cpp
            ${problem_name}.h
            ${problem_name}_test.cpp
    )

    target_include_directories(${problem_test_exe} PUBLIC
            ${googletest_include}
    )
    if(AE_BST)
        target_include_directories(${problem_test_exe} PUBLIC
                ${BST_INCLUDE_DIR}
        )
    endif()

    target_link_libraries(${problem_test_exe} PUBLIC
            gtest_main
    )
    if(AE_BST)
        target_link_libraries(${problem_test_exe} PUBLIC
                BinarySearchTrees
        )
    endif()

    gtest_discover_tests(${problem_test_exe})
endfunction(add_tests_for_problem)
