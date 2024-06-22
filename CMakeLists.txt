cmake_minimum_required(VERSION 3.28)
project(ae)

set(CMAKE_CXX_STANDARD 23)

include(FetchContent)
FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG v1.14.0
        GIT_SHALLOW TRUE
)
FetchContent_MakeAvailable(googletest)
# Use ${googletest_SOURCE_DIR}/googletest/include in target_include_directories(...)

set(AlgoExpertDir AlgoExpert)
add_subdirectory(${AlgoExpertDir})

set(aeExe ae.exe)
add_executable(${aeExe} main.cpp)
target_include_directories(${aeExe} PRIVATE ${AlgoExpertDir})
target_link_libraries(${aeExe} PRIVATE algoExpert)
