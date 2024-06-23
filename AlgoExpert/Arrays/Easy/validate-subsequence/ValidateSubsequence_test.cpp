#include "ValidateSubsequence.h"
#include "gtest/gtest.h"

namespace {
	TEST(ValidateSubsequence, Case01)
	{
		std::vector<int> array = {5, 1, 22, 25, 6, -1, 8, 10};
		std::vector<int> sequence = {1, 6, -1, 10};
		EXPECT_EQ(true, algoExpert::arrays::isValidSubsequence(array, sequence));
	}
	TEST(ValidateSubsequence, Case02)
	{
		std::vector<int> array = {5, 1, 22, 25, 6, -1, 8, 10};
		std::vector<int> sequence = {5, 1, 22, 25, 6, -1, 8, 10};
		EXPECT_EQ(true, algoExpert::arrays::isValidSubsequence(array, sequence));
	}
	TEST(ValidateSubsequence, Case03)
	{
		std::vector<int> array = {5, 1, 22, 25, 6, -1, 8, 10};
		std::vector<int> sequence = {5, 1, 22, 6, -1, 8, 10};
		EXPECT_EQ(true, algoExpert::arrays::isValidSubsequence(array, sequence));
	}
	TEST(ValidateSubsequence, Case04)
	{
		std::vector<int> array = {5, 1, 22, 25, 6, -1, 8, 10};
		std::vector<int> sequence = {22, 25, 6};
		EXPECT_EQ(true, algoExpert::arrays::isValidSubsequence(array, sequence));
	}
	TEST(ValidateSubsequence, Case05)
	{
		std::vector<int> array = {5, 1, 22, 25, 6, -1, 8, 10};
		std::vector<int> sequence = {1, 6, 10};
		EXPECT_EQ(true, algoExpert::arrays::isValidSubsequence(array, sequence));
	}
	TEST(ValidateSubsequence, Case06)
	{
		std::vector<int> array = {5, 1, 22, 25, 6, -1, 8, 10};
		std::vector<int> sequence = {5, 1, 22, 10};
		EXPECT_EQ(true, algoExpert::arrays::isValidSubsequence(array, sequence));
	}
	TEST(ValidateSubsequence, Case07)
	{
		std::vector<int> array = {5, 1, 22, 25, 6, -1, 8, 10};
		std::vector<int> sequence = {5, -1, 8, 10};
		EXPECT_EQ(true, algoExpert::arrays::isValidSubsequence(array, sequence));
	}
	TEST(ValidateSubsequence, Case08)
	{
		std::vector<int> array = {5, 1, 22, 25, 6, -1, 8, 10};
		std::vector<int> sequence = {25};
		EXPECT_EQ(true, algoExpert::arrays::isValidSubsequence(array, sequence));
	}
	TEST(ValidateSubsequence, Case09)
	{
		std::vector<int> array = {1, 1, 1, 1, 1};
		std::vector<int> sequence = {1, 1, 1};
		EXPECT_EQ(true, algoExpert::arrays::isValidSubsequence(array, sequence));
	}
	TEST(ValidateSubsequence, Case10)
	{
		std::vector<int> array = {5, 1, 22, 25, 6, -1, 8, 10};
		std::vector<int> sequence = {5, 1, 22, 25, 6, -1, 8, 10, 12};
		EXPECT_EQ(false, algoExpert::arrays::isValidSubsequence(array, sequence));
	}
	TEST(ValidateSubsequence, Case11)
	{
		std::vector<int> array = {5, 1, 22, 25, 6, -1, 8, 10};
		std::vector<int> sequence = {4, 5, 1, 22, 25, 6, -1, 8, 10};
		EXPECT_EQ(false, algoExpert::arrays::isValidSubsequence(array, sequence));
	}
	TEST(ValidateSubsequence, Case12)
	{
		std::vector<int> array = {5, 1, 22, 25, 6, -1, 8, 10};
		std::vector<int> sequence = {5, 1, 22, 23, 6, -1, 8, 10};
		EXPECT_EQ(false, algoExpert::arrays::isValidSubsequence(array, sequence));
	}
	TEST(ValidateSubsequence, Case13)
	{
		std::vector<int> array = {5, 1, 22, 25, 6, -1, 8, 10};
		std::vector<int> sequence = {5, 1, 22, 22, 25, 6, -1, 8, 10};
		EXPECT_EQ(false, algoExpert::arrays::isValidSubsequence(array, sequence));
	}
	TEST(ValidateSubsequence, Case14)
	{
		std::vector<int> array = {5, 1, 22, 25, 6, -1, 8, 10};
		std::vector<int> sequence = {5, 1, 22, 22, 6, -1, 8, 10};
		EXPECT_EQ(false, algoExpert::arrays::isValidSubsequence(array, sequence));
	}
	TEST(ValidateSubsequence, Case15)
	{
		std::vector<int> array = {5, 1, 22, 25, 6, -1, 8, 10};
		std::vector<int> sequence = {1, 6, -1, -1};
		EXPECT_EQ(false, algoExpert::arrays::isValidSubsequence(array, sequence));
	}
	TEST(ValidateSubsequence, Case16)
	{
		std::vector<int> array = {5, 1, 22, 25, 6, -1, 8, 10};
		std::vector<int> sequence = {1, 6, -1, -1, 10};
		EXPECT_EQ(false, algoExpert::arrays::isValidSubsequence(array, sequence));
	}
	TEST(ValidateSubsequence, Case17)
	{
		std::vector<int> array = {5, 1, 22, 25, 6, -1, 8, 10};
		std::vector<int> sequence = {1, 6, -1, -2};
		EXPECT_EQ(false, algoExpert::arrays::isValidSubsequence(array, sequence));
	}
	TEST(ValidateSubsequence, Case18)
	{
		std::vector<int> array = {5, 1, 22, 25, 6, -1, 8, 10};
		std::vector<int> sequence = {26};
		EXPECT_EQ(false, algoExpert::arrays::isValidSubsequence(array, sequence));
	}
	TEST(ValidateSubsequence, Case19)
	{
		std::vector<int> array = {5, 1, 22, 25, 6, -1, 8, 10};
		std::vector<int> sequence = {5, 1, 25, 22, 6, -1, 8, 10};
		EXPECT_EQ(false, algoExpert::arrays::isValidSubsequence(array, sequence));
	}
	TEST(ValidateSubsequence, Case20)
	{
		std::vector<int> array = {5, 1, 22, 25, 6, -1, 8, 10};
		std::vector<int> sequence = {5, 26, 22, 8};
		EXPECT_EQ(false, algoExpert::arrays::isValidSubsequence(array, sequence));
	}
	TEST(ValidateSubsequence, Case21)
	{
		std::vector<int> array = {1, 1, 6, 1};
		std::vector<int> sequence = {1, 1, 1, 6};
		EXPECT_EQ(false, algoExpert::arrays::isValidSubsequence(array, sequence));
	}
	TEST(ValidateSubsequence, Case22)
	{
		std::vector<int> array = {5, 1, 22, 25, 6, -1, 8, 10};
		std::vector<int> sequence = {1, 6, -1, 10, 11, 11, 11, 11};
		EXPECT_EQ(false, algoExpert::arrays::isValidSubsequence(array, sequence));
	}
	TEST(ValidateSubsequence, Case23)
	{
		std::vector<int> array = {5, 1, 22, 25, 6, -1, 8, 10};
		std::vector<int> sequence = {5, 1, 22, 25, 6, -1, 8, 10, 10};
		EXPECT_EQ(false, algoExpert::arrays::isValidSubsequence(array, sequence));
	}
	TEST(ValidateSubsequence, Case24)
	{
		std::vector<int> array = {5, 1, 22, 25, 6, -1, 8, 10};
		std::vector<int> sequence = {1, 6, -1, 5};
		EXPECT_EQ(false, algoExpert::arrays::isValidSubsequence(array, sequence));
	}
}


