
#include "ValidateSubsequence.h"
#include "gtest/gtest.h"

namespace {
    TEST(ValidateSubsequence, Case01) {
        std::vector<int> array = {5, 1, 22, 25, 6, -1, 8, 10};
        std::vector<int> sequence = {1, 6, -1, 10};
        EXPECT_EQ(true, algoExpert::arrays::isValidSubsequence(array, sequence));
    }
}


