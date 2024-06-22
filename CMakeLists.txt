cmake_minimum_required(VERSION 3.28)
project(ae)

set(CMAKE_CXX_STANDARD 23)

set(AlgoExpertDir AlgoExpert)
add_subdirectory(${AlgoExpertDir})

set(aeExe ae.exe)
add_executable(${aeExe} main.cpp)
target_include_directories(${aeExe} PRIVATE ${AlgoExpertDir})
target_link_libraries(${aeExe} PRIVATE algoExpert)
