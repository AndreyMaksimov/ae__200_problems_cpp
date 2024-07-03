#include "MergeOverlappingIntervals.h"
#include "gtest/gtest.h"

namespace
{
    TEST(MergeOverlappingIntervals, Case01)
    {
        std::vector<std::vector<int>> intervals =
                {
                        {1, 2},
                        {3, 5},
                        {4, 7},
                        {6, 8},
                        {9, 10}
                };
        std::vector<std::vector<int>> expected =
                {
                        {1, 2},
                        {3, 8},
                        {9, 10}
                };
        const auto output = algoExpert::arrays::mergeOverlappingIntervals(intervals);
        EXPECT_EQ(expected, output);
    }
    TEST(MergeOverlappingIntervals, Case02)
    {
        std::vector<std::vector<int>> intervals =
                {
                        {1, 3},
                        {2, 8},
                        {9, 10}
                };
        std::vector<std::vector<int>> expected =
                {
                        {1, 8},
                        {9, 10}
                };
        const auto output = algoExpert::arrays::mergeOverlappingIntervals(intervals);
        EXPECT_EQ(expected, output);
    }
    TEST(MergeOverlappingIntervals, Case03)
    {
        std::vector<std::vector<int>> intervals =
                {
                        {1, 10},
                        {10, 20},
                        {20, 30},
                        {30, 40},
                        {40, 50},
                        {50, 60},
                        {60, 70},
                        {70, 80},
                        {80, 90},
                        {90, 100}
                };
        std::vector<std::vector<int>> expected =
                {
                        {1, 100}
                };
        const auto output = algoExpert::arrays::mergeOverlappingIntervals(intervals);
        EXPECT_EQ(expected, output);
    }
    TEST(MergeOverlappingIntervals, Case04)
    {
        std::vector<std::vector<int>> intervals =
                {
                        {1, 10},
                        {11, 20},
                        {21, 30},
                        {31, 40},
                        {41, 50},
                        {51, 60},
                        {61, 70},
                        {71, 80},
                        {81, 90},
                        {91, 100}
                };
        std::vector<std::vector<int>> expected =
                {
                        {1, 10},
                        {11, 20},
                        {21, 30},
                        {31, 40},
                        {41, 50},
                        {51, 60},
                        {61, 70},
                        {71, 80},
                        {81, 90},
                        {91, 100}
                };
        const auto output = algoExpert::arrays::mergeOverlappingIntervals(intervals);
        EXPECT_EQ(expected, output);
    }
    TEST(MergeOverlappingIntervals, Case05)
    {
        std::vector<std::vector<int>> intervals =
                {
                        {100, 105},
                        {1, 104}
                };
        std::vector<std::vector<int>> expected =
                {
                        {1, 105}
                };
        const auto output = algoExpert::arrays::mergeOverlappingIntervals(intervals);
        EXPECT_EQ(expected, output);
    }
    TEST(MergeOverlappingIntervals, Case06)
    {
        std::vector<std::vector<int>> intervals =
                {
                        {89, 90},
                        {-10, 20},
                        {-50, 0},
                        {70, 90},
                        {90, 91},
                        {90, 95}
                };
        std::vector<std::vector<int>> expected =
                {
                        {-50, 20},
                        {70, 95}
                };
        const auto output = algoExpert::arrays::mergeOverlappingIntervals(intervals);
        EXPECT_EQ(expected, output);
    }
    TEST(MergeOverlappingIntervals, Case07)
    {
        std::vector<std::vector<int>> intervals =
                {
                        {-5, -4},
                        {-4, -3},
                        {-3, -2},
                        {-2, -1},
                        {-1, 0}
                };
        std::vector<std::vector<int>> expected =
                {
                        {-5, 0}
                };
        const auto output = algoExpert::arrays::mergeOverlappingIntervals(intervals);
        EXPECT_EQ(expected, output);
    }
    TEST(MergeOverlappingIntervals, Case08)
    {
        std::vector<std::vector<int>> intervals =
                {
                        {43, 49},
                        {9, 12},
                        {12, 54},
                        {45, 90},
                        {91, 93}
                };
        std::vector<std::vector<int>> expected =
                {
                        {9, 90},
                        {91, 93}
                };
        const auto output = algoExpert::arrays::mergeOverlappingIntervals(intervals);
        EXPECT_EQ(expected, output);
    }
    TEST(MergeOverlappingIntervals, Case09)
    {
        std::vector<std::vector<int>> intervals =
                {
                        {0, 0},
                        {0, 0},
                        {0, 0},
                        {0, 0},
                        {0, 0},
                        {0, 0},
                        {0, 0}
                };
        std::vector<std::vector<int>> expected =
                {
                        {0, 0}
                };
        const auto output = algoExpert::arrays::mergeOverlappingIntervals(intervals);
        EXPECT_EQ(expected, output);
    }
    TEST(MergeOverlappingIntervals, Case10)
    {
        std::vector<std::vector<int>> intervals =
                {
                        {0, 0},
                        {0, 0},
                        {0, 0},
                        {0, 0},
                        {0, 0},
                        {0, 0},
                        {0, 1}
                };
        std::vector<std::vector<int>> expected =
                {
                        {0, 1}
                };
        const auto output = algoExpert::arrays::mergeOverlappingIntervals(intervals);
        EXPECT_EQ(expected, output);
    }
    TEST(MergeOverlappingIntervals, Case11)
    {
        std::vector<std::vector<int>> intervals =
                {
                        {1, 22},
                        {-20, 30}
                };
        std::vector<std::vector<int>> expected =
                {
                        {-20, 30}
                };
        const auto output = algoExpert::arrays::mergeOverlappingIntervals(intervals);
        EXPECT_EQ(expected, output);
    }
    TEST(MergeOverlappingIntervals, Case12)
    {
        std::vector<std::vector<int>> intervals =
                {
                        {20, 21},
                        {22, 23},
                        {0, 1},
                        {3, 4},
                        {23, 24},
                        {25, 27},
                        {5, 6},
                        {7, 19}
                };
        std::vector<std::vector<int>> expected =
                {
                        {0, 1},
                        {3, 4},
                        {5, 6},
                        {7, 19},
                        {20, 21},
                        {22, 24},
                        {25, 27}
                };
        const auto output = algoExpert::arrays::mergeOverlappingIntervals(intervals);
        EXPECT_EQ(expected, output);
    }
    TEST(MergeOverlappingIntervals, Case13)
    {
        std::vector<std::vector<int>> intervals =
                {
                        {2, 3},
                        {4, 5},
                        {6, 7},
                        {8, 9},
                        {1, 10}
                };
        std::vector<std::vector<int>> expected =
                {
                        {1, 10}
                };
        const auto output = algoExpert::arrays::mergeOverlappingIntervals(intervals);
        EXPECT_EQ(expected, output);
    }
}

