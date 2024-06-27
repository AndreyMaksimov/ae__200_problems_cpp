#include <algorithm>
#include "MoveElementToEnd.h"
#include "gtest/gtest.h"

namespace
{
    void correctArray(std::vector<int>& array, const int num) {
        auto pos = array.begin();
        while (pos != array.end()) {
            if (*pos == num) break;
            ++pos;
        }
        std::sort(array.begin(), pos);
    }
            
    TEST(moveElementToEnd, Case01)
    {
        std::vector<int> array = {2, 1, 2, 2, 2, 3, 4, 2};
        const int toMove = 2;
        std::vector<int> expected = {4, 1, 3, 2, 2, 2, 2, 2};
        auto result = algoExpert::arrays::moveElementToEnd(array, toMove);
        correctArray(expected, toMove);
        correctArray(result, toMove);
        EXPECT_EQ(expected, result);
    }
    TEST(moveElementToEnd, Case02)
    {
        std::vector<int> array = {};
        const int toMove = 3;
        std::vector<int> expected = {};
        auto result = algoExpert::arrays::moveElementToEnd(array, toMove);
        correctArray(expected, toMove);
        correctArray(result, toMove);
        EXPECT_EQ(expected, result);
    }
    TEST(moveElementToEnd, Case03)
    {
        std::vector<int> array = {1, 2, 4, 5, 6};
        const int toMove = 3;
        std::vector<int> expected = {1, 2, 4, 5, 6};
        auto result = algoExpert::arrays::moveElementToEnd(array, toMove);
        correctArray(expected, toMove);
        correctArray(result, toMove);
        EXPECT_EQ(expected, result);
    }
    TEST(moveElementToEnd, Case04)
    {
        std::vector<int> array = {3, 3, 3, 3, 3};
        const int toMove = 3;
        std::vector<int> expected = {3, 3, 3, 3, 3};
        auto result = algoExpert::arrays::moveElementToEnd(array, toMove);
        correctArray(expected, toMove);
        correctArray(result, toMove);
        EXPECT_EQ(expected, result);
    }
    TEST(moveElementToEnd, Case05)
    {
        std::vector<int> array = {3, 1, 2, 4, 5};
        const int toMove = 3;
        std::vector<int> expected = {5, 1, 2, 4, 3};
        auto result = algoExpert::arrays::moveElementToEnd(array, toMove);
        correctArray(expected, toMove);
        correctArray(result, toMove);
        EXPECT_EQ(expected, result);
    }
    TEST(moveElementToEnd, Case06)
    {
        std::vector<int> array = {1, 2, 4, 5, 3};
        const int toMove = 3;
        std::vector<int> expected = {1, 2, 4, 5, 3};
        auto result = algoExpert::arrays::moveElementToEnd(array, toMove);
        correctArray(expected, toMove);
        correctArray(result, toMove);
        EXPECT_EQ(expected, result);
    }
    TEST(moveElementToEnd, Case07)
    {
        std::vector<int> array = {1, 2, 3, 4, 5};
        const int toMove = 3;
        std::vector<int> expected = {1, 2, 5, 4, 3};
        auto result = algoExpert::arrays::moveElementToEnd(array, toMove);
        correctArray(expected, toMove);
        correctArray(result, toMove);
        EXPECT_EQ(expected, result);
    }
    TEST(moveElementToEnd, Case08)
    {
        std::vector<int> array = {2, 4, 2, 5, 6, 2, 2};
        const int toMove = 2;
        std::vector<int> expected = {6, 4, 5, 2, 2, 2, 2};
        auto result = algoExpert::arrays::moveElementToEnd(array, toMove);
        correctArray(expected, toMove);
        correctArray(result, toMove);
        EXPECT_EQ(expected, result);
    }
    TEST(moveElementToEnd, Case09)
    {
        std::vector<int> array = {5, 5, 5, 5, 5, 5, 1, 2, 3, 4, 6, 7, 8, 9, 10, 11, 12};
        const int toMove = 5;
        std::vector<int> expected = {12, 11, 10, 9, 8, 7, 1, 2, 3, 4, 6, 5, 5, 5, 5, 5, 5};
        auto result = algoExpert::arrays::moveElementToEnd(array, toMove);
        correctArray(expected, toMove);
        correctArray(result, toMove);
        EXPECT_EQ(expected, result);
    }
    TEST(moveElementToEnd, Case10)
    {
        std::vector<int> array = {1, 2, 3, 4, 6, 7, 8, 9, 10, 11, 12, 5, 5, 5, 5, 5, 5};
        const int toMove = 5;
        std::vector<int> expected = {1, 2, 3, 4, 6, 7, 8, 9, 10, 11, 12, 5, 5, 5, 5, 5, 5};
        auto result = algoExpert::arrays::moveElementToEnd(array, toMove);
        correctArray(expected, toMove);
        correctArray(result, toMove);
        EXPECT_EQ(expected, result);
    }
    TEST(moveElementToEnd, Case11)
    {
        std::vector<int> array = {5, 1, 2, 5, 5, 3, 4, 6, 7, 5, 8, 9, 10, 11, 5, 5, 12};
        const int toMove = 5;
        std::vector<int> expected = {12, 1, 2, 11, 10, 3, 4, 6, 7, 9, 8, 5, 5, 5, 5, 5, 5};
        auto result = algoExpert::arrays::moveElementToEnd(array, toMove);
        correctArray(expected, toMove);
        correctArray(result, toMove);
        EXPECT_EQ(expected, result);
    }
}
