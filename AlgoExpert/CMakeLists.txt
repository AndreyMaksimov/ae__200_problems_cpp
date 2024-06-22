# AlgoExpert/CMakeLists.txt

set(AlgoExpertLib algoExpert)

add_library(${AlgoExpertLib})
target_sources(${AlgoExpertLib} PRIVATE
        AlgoExpert.cpp
)
