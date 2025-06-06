#include "RightSmallerThan.h"
#include "gtest/gtest.h"

#if 0
namespace
{
	TEST(RightSmallerThan, Case01)
	{
		std::vector<int> array = {8, 5, 11, -1, 3, 4, 2};
		const std::vector<int> expected = {5, 4, 4, 0, 1, 1, 0};
		const auto output = algoExpert::binarySearchTrees::rightSmallerThan(array);
		EXPECT_EQ(expected, output);
	}
	TEST(RightSmallerThan, Case02)
	{
		std::vector<int> array = {};
		const std::vector<int> expected = {};
		const auto output = algoExpert::binarySearchTrees::rightSmallerThan(array);
		EXPECT_EQ(expected, output);
	}
	TEST(RightSmallerThan, Case03)
	{
		std::vector<int> array = {1};
		const std::vector<int> expected = {0};
		const auto output = algoExpert::binarySearchTrees::rightSmallerThan(array);
		EXPECT_EQ(expected, output);
	}
	TEST(RightSmallerThan, Case04)
	{
		std::vector<int> array = {0, 1, 1, 2, 3, 5, 8, 13};
		const std::vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0};
		const auto output = algoExpert::binarySearchTrees::rightSmallerThan(array);
		EXPECT_EQ(expected, output);
	}
	TEST(RightSmallerThan, Case05)
	{
		std::vector<int> array = {13, 8, 5, 3, 2, 1, 1, 0};
		const std::vector<int> expected = {7, 6, 5, 4, 3, 1, 1, 0};
		const auto output = algoExpert::binarySearchTrees::rightSmallerThan(array);
		EXPECT_EQ(expected, output);
	}
	TEST(RightSmallerThan, Case06)
	{
		std::vector<int> array = {8, 5, 2, 9, 5, 6, 3};
		const std::vector<int> expected = {5, 2, 0, 3, 1, 1, 0};
		const auto output = algoExpert::binarySearchTrees::rightSmallerThan(array);
		EXPECT_EQ(expected, output);
	}
	TEST(RightSmallerThan, Case07)
	{
		std::vector<int> array = {991, -731, -882, 100, 280, -43, 432, 771, -581, 180, -382, -998, 847, 80, -220, 680, 769, -75, -817, 366, 956, 749, 471, 228, -435, -269, 652, -331, -387, -657, -255, 382, -216, -6, -163, -681, 980, 913, -169, 972, -523, 354, 747, 805, 382, -827, -796, 372, 753, 519, 906};
		const std::vector<int> expected = {50, 5, 1, 22, 24, 19, 28, 36, 6, 20, 9, 0, 33, 17, 11, 25, 28, 14, 1, 16, 28, 23, 19, 14, 5, 7, 17, 6, 5, 3, 4, 10, 4, 6, 5, 2, 14, 12, 3, 11, 2, 2, 5, 6, 3, 0, 0, 0, 1, 0, 0};
		const auto output = algoExpert::binarySearchTrees::rightSmallerThan(array);
		EXPECT_EQ(expected, output);
	}
	TEST(RightSmallerThan, Case08)
	{
		std::vector<int> array = {384, -67, 120, 759, 697, 232, -7, -557, -772, -987, 687, 397, -763, -86, -491, 947, 921, 421, 825, -679, 946, -562, -626, -898, 204, 776, -343, 393, 51, -796, -425, 31, 165, 975, -720, 878, -785, -367, -609, 662, -79, -112, -313, -94, 187, 260, 43, 85, -746, 612, 67, -389, 508, 777, 624, 993, -581, 34, 444, -544, 243, -995, 432, -755, -978, 515, -68, -559, 489, 732, -19, -489, 737, 924};
		const std::vector<int> expected = {47, 31, 39, 60, 57, 42, 32, 17, 6, 1, 51, 41, 5, 24, 15, 56, 53, 38, 50, 8, 51, 11, 8, 2, 30, 43, 15, 31, 24, 2, 11, 19, 23, 39, 5, 36, 2, 10, 4, 29, 12, 10, 9, 9, 15, 16, 12, 13, 3, 18, 11, 7, 14, 18, 15, 18, 3, 8, 10, 4, 7, 0, 6, 1, 0, 5, 2, 0, 2, 2, 1, 0, 0, 0};
		const auto output = algoExpert::binarySearchTrees::rightSmallerThan(array);
		EXPECT_EQ(expected, output);
	}
	TEST(RightSmallerThan, Case09)
	{
		std::vector<int> array = {-823, 164, 48, -987, 323, 399, -293, 183, -908, -376, 14, 980, 965, 842, 422, 829, 59, 724, -415, -733, 356, -855, -155, 52, 328, -544, -371, -160, -942, -51, 700, -363, -353, -359, 238, 892, -730, -575, 892, 490, 490, 995, 572, 888, -935, 919, -191, 646, -120, 125, -817, 341, -575, 372, -874, 243, 610, -36, -685, -337, -13, 295, 800, -950, -949, -257, 631, -542, 201, -796, 157, 950, 540, -846, -265, 746, 355, -578, -441, -254, -941, -738, -469, -167, -420, -126, -410, 59};
		const std::vector<int> expected = {10, 52, 46, 0, 55, 60, 31, 49, 5, 24, 41, 75, 74, 68, 55, 66, 42, 62, 22, 11, 50, 6, 32, 37, 44, 15, 20, 29, 2, 30, 49, 19, 20, 19, 33, 48, 9, 11, 46, 36, 36, 46, 37, 42, 3, 41, 20, 37, 22, 25, 5, 28, 9, 28, 3, 24, 27, 19, 6, 12, 17, 20, 24, 0, 0, 11, 19, 5, 15, 2, 13, 16, 14, 1, 7, 12, 11, 2, 3, 5, 0, 0, 0, 2, 0, 1, 0, 0};
		const auto output = algoExpert::binarySearchTrees::rightSmallerThan(array);
		EXPECT_EQ(expected, output);
	}
}
#endif
