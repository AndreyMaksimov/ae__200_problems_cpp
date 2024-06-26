#include "TransposeMatrix.h"
#include "gtest/gtest.h"

namespace {
    using std::vector;
    TEST(TransposeMatrix, Case01)
    {
        vector<vector<int>> matrix = {
            {1}
        };
        vector<vector<int>> expected = {
            {1}
        };
        const auto output = algoExpert::arrays::transposeMatrix(matrix);
        EXPECT_EQ(expected, output);
    }
    TEST(TransposeMatrix, Case02)
    {
        vector<vector<int>> matrix = {
            {1},
            {-1}
        };
        vector<vector<int>> expected =
        {
            {1, -1}
        };
        const auto output = algoExpert::arrays::transposeMatrix(matrix);
        EXPECT_EQ(expected, output);
    }
    TEST(TransposeMatrix, Case03)
    {
        vector<vector<int>> matrix = {
            {1, 2, 3}
        };
        vector<vector<int>> expected =
        {
            {1},
            {2},
            {3}
        };
        const auto output = algoExpert::arrays::transposeMatrix(matrix);
        EXPECT_EQ(expected, output);
    }
    TEST(TransposeMatrix, Case04)
    {
        vector<vector<int>> matrix = {
            {1},
            {2},
            {3}
        };
        vector<vector<int>> expected =
        {
            {1, 2, 3}
        };
        const auto output = algoExpert::arrays::transposeMatrix(matrix);
        EXPECT_EQ(expected, output);
    }
    TEST(TransposeMatrix,Case05)
    {
        vector<vector<int>> matrix = {
                {1, 2, 3},
                {4, 5, 6}
        };
        vector<vector<int>> expected =
        {
                {1, 4},
                {2, 5},
                {3, 6}
        };
        const auto output = algoExpert::arrays::transposeMatrix(matrix);
        EXPECT_EQ(expected, output);
    }
    TEST(TransposeMatrix,Case06)
    {
        vector<vector<int>> matrix = {
                {0, 0, 0},
                {1, 1, 1}
        };
        vector<vector<int>> expected =
        {
                {0, 1},
                {0, 1},
                {0, 1}
        };
        const auto output = algoExpert::arrays::transposeMatrix(matrix);
        EXPECT_EQ(expected, output);
    }
    TEST(TransposeMatrix,Case07)
    {
        vector<vector<int>> matrix = {
                {0, 1},
                {0, 1},
                {0, 1}
        };
        vector<vector<int>> expected =
        {
                {0, 0, 0},
                {1, 1, 1}
        };
        const auto output = algoExpert::arrays::transposeMatrix(matrix);
        EXPECT_EQ(expected, output);
    }
    TEST(TransposeMatrix,Case08)
    {
        vector<vector<int>> matrix = {
                {0, 0, 0},
                {0, 0, 0}
        };
        vector<vector<int>> expected =
        {
                {0, 0},
                {0, 0},
                {0, 0}
        };
        const auto output = algoExpert::arrays::transposeMatrix(matrix);
        EXPECT_EQ(expected, output);
    }
    TEST(TransposeMatrix,Case09)
    {
        vector<vector<int>> matrix = {
                {1, 4},
                {2, 5},
                {3, 6}
        };
        vector<vector<int>> expected =
        {
                {1, 2, 3},
                {4, 5, 6}
        };
        const auto output = algoExpert::arrays::transposeMatrix(matrix);
        EXPECT_EQ(expected, output);
    }
    TEST(TransposeMatrix,Case10)
    {
        vector<vector<int>> matrix = {
                {-7, -7},
                {100, 12},
                {-33, 17}
        };
        vector<vector<int>> expected =
        {
                {-7, 100, -33},
                {-7, 12, 17}
        };
        const auto output = algoExpert::arrays::transposeMatrix(matrix);
        EXPECT_EQ(expected, output);
    }
    TEST(TransposeMatrix,Case11)
    {
        vector<vector<int>> matrix = {
                {1, 2, 3},
                {4, 5, 6},
                {7, 8, 9}
        };
        vector<vector<int>> expected =
        {
                {1, 4, 7},
                {2, 5, 8},
                {3, 6, 9}
        };
        const auto output = algoExpert::arrays::transposeMatrix(matrix);
        EXPECT_EQ(expected, output);
    }
    TEST(TransposeMatrix,Case12)
    {
        vector<vector<int>> matrix = {
                {1, 4, 7},
                {2, 5, 8},
                {3, 6, 9}
        };
        vector<vector<int>> expected =
        {
                {1, 2, 3},
                {4, 5, 6},
                {7, 8, 9}
        };
        const auto output = algoExpert::arrays::transposeMatrix(matrix);
        EXPECT_EQ(expected, output);
    }
    TEST(TransposeMatrix,Case13)
    {
        vector<vector<int>> matrix = {
                {5, 6, 3, -3, 12},
                {-3, 6, 5, 2, -1},
                {0, 0, 3, 12, 3}
        };
        vector<vector<int>> expected =
        {
                {5, -3, 0},
                {6, 6, 0},
                {3, 5, 3},
                {-3, 2, 12},
                {12, -1, 3}
        };
        const auto output = algoExpert::arrays::transposeMatrix(matrix);
        EXPECT_EQ(expected, output);
    }
    TEST(TransposeMatrix,Case14)
    {
        vector<vector<int>> matrix = {
                {0, -1, -2, -3},
                {4, 5, 6, 7},
                {2, 3, -2, -3},
                {42, 100, 30, -42}
        };
        vector<vector<int>> expected =
        {
                {0, 4, 2, 42},
                {-1, 5, 3, 100},
                {-2, 6, -2, 30},
                {-3, 7, -3, -42}
        };
        const auto output = algoExpert::arrays::transposeMatrix(matrix);
        EXPECT_EQ(expected, output);
    }
    TEST(TransposeMatrix,Case15)
    {
        vector<vector<int>> matrix = {
                {1234, 6935, 4205},
                {-23459, 314159, 0},
                {100, 3, 987654}
        };
        vector<vector<int>> expected =
        {
                {1234, -23459, 100},
                {6935, 314159, 3},
                {4205, 0, 987654}
        };
        const auto output = algoExpert::arrays::transposeMatrix(matrix);
        EXPECT_EQ(expected, output);
    }
}
