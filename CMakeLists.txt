cmake_minimum_required(VERSION 3.28)
project(AlgoExpert-CPP)

set(CMAKE_CXX_STANDARD 17)

include(FetchContent)
FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG v1.14.0
        GIT_SHALLOW TRUE
)
FetchContent_MakeAvailable(googletest)
set(googletest_include ${googletest_SOURCE_DIR}/googletest/include)

set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake/")
include(AeHelpers)

enable_testing()
include(GoogleTest)

add_subdirectory(AlgoExpert)
