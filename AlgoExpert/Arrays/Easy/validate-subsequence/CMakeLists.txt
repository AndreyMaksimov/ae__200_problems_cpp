# AlgoExpert/Arrays/Easy/validate-subsequence/CMakeLists.txt

set(problem_name ValidateSubsequence)
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
target_link_libraries(${problem_test_exe} PUBLIC
        gtest_main
)

gtest_discover_tests(${problem_test_exe})
