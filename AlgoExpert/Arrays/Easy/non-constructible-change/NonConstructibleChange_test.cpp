#include "NonConstructibleChange.h"
#include "gtest/gtest.h"

namespace
{
    TEST(NonConstructibleChange, Case01)
    {
        const std::vector<int> array = {1, 2, 3, 5, 6, 8, 9};
        const int expected = 0;
        const auto result = algoExpert::arrays::nonConstructibleChange(array);
        EXPECT_EQ(expected, result);
    }
}
