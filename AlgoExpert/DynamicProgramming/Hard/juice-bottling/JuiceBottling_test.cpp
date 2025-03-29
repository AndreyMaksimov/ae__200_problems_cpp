#include "JuiceBottling.h"
#include "gtest/gtest.h"

#if 0
namespace
{
	TEST(JuiceBottling, Case01)
	{
		std::vector<int> prices = {0, 1};
		const std::vector<int> expected = {1};
		const auto output = algoExpert::dynamicProgramming::juiceBottling(prices);
		EXPECT_EQ(expected, output);
	}
	TEST(JuiceBottling, Case02)
	{
		std::vector<int> prices = {0, 1, 3};
		const std::vector<int> expected = {2};
		const auto output = algoExpert::dynamicProgramming::juiceBottling(prices);
		EXPECT_EQ(expected, output);
	}
	TEST(JuiceBottling, Case03)
	{
		std::vector<int> prices = {0, 2, 3};
		const std::vector<int> expected = {1, 1};
		const auto output = algoExpert::dynamicProgramming::juiceBottling(prices);
		EXPECT_EQ(expected, output);
	}
	TEST(JuiceBottling, Case04)
	{
		std::vector<int> prices = {0, 2, 3, 4};
		const std::vector<int> expected = {1, 1, 1};
		const auto output = algoExpert::dynamicProgramming::juiceBottling(prices);
		EXPECT_EQ(expected, output);
	}
	TEST(JuiceBottling, Case05)
	{
		std::vector<int> prices = {0, 2, 5, 6};
		const std::vector<int> expected = {1, 2};
		const auto output = algoExpert::dynamicProgramming::juiceBottling(prices);
		EXPECT_EQ(expected, output);
	}
	TEST(JuiceBottling, Case06)
	{
		std::vector<int> prices = {0, 2, 5, 6, 7};
		const std::vector<int> expected = {2, 2};
		const auto output = algoExpert::dynamicProgramming::juiceBottling(prices);
		EXPECT_EQ(expected, output);
	}
	TEST(JuiceBottling, Case07)
	{
		std::vector<int> prices = {0, 2, 5, 6, 11};
		const std::vector<int> expected = {4};
		const auto output = algoExpert::dynamicProgramming::juiceBottling(prices);
		EXPECT_EQ(expected, output);
	}
	TEST(JuiceBottling, Case08)
	{
		std::vector<int> prices = {0, 2, 5, 10, 11};
		const std::vector<int> expected = {1, 3};
		const auto output = algoExpert::dynamicProgramming::juiceBottling(prices);
		EXPECT_EQ(expected, output);
	}
	TEST(JuiceBottling, Case09)
	{
		std::vector<int> prices = {0, 5, 6, 7, 8, 9, 10};
		const std::vector<int> expected = {1, 1, 1, 1, 1, 1};
		const auto output = algoExpert::dynamicProgramming::juiceBottling(prices);
		EXPECT_EQ(expected, output);
	}
	TEST(JuiceBottling, Case10)
	{
		std::vector<int> prices = {0, 2, 5, 4, 4};
		const std::vector<int> expected = {2, 2};
		const auto output = algoExpert::dynamicProgramming::juiceBottling(prices);
		EXPECT_EQ(expected, output);
	}
	TEST(JuiceBottling, Case11)
	{
		std::vector<int> prices = {0, 1, 3, 2};
		const std::vector<int> expected = {1, 2};
		const auto output = algoExpert::dynamicProgramming::juiceBottling(prices);
		EXPECT_EQ(expected, output);
	}
	TEST(JuiceBottling, Case12)
	{
		std::vector<int> prices = {0, 1, 3, 2, 4};
		const std::vector<int> expected = {2, 2};
		const auto output = algoExpert::dynamicProgramming::juiceBottling(prices);
		EXPECT_EQ(expected, output);
	}
	TEST(JuiceBottling, Case13)
	{
		std::vector<int> prices = {0, 3, 5, 10, 8, 4, 12, 15, 20, 18, 25};
		const std::vector<int> expected = {1, 3, 3, 3};
		const auto output = algoExpert::dynamicProgramming::juiceBottling(prices);
		EXPECT_EQ(expected, output);
	}
	TEST(JuiceBottling, Case14)
	{
		std::vector<int> prices = {0, 1, 3, 7, 5, 4, 12, 15, 20, 18, 25};
		const std::vector<int> expected = {10};
		const auto output = algoExpert::dynamicProgramming::juiceBottling(prices);
		EXPECT_EQ(expected, output);
	}
	TEST(JuiceBottling, Case15)
	{
		std::vector<int> prices = {0, 1, 3, 6, 5, 4, 17, 15, 20, 18, 21};
		const std::vector<int> expected = {1, 3, 6};
		const auto output = algoExpert::dynamicProgramming::juiceBottling(prices);
		EXPECT_EQ(expected, output);
	}
	TEST(JuiceBottling, Case16)
	{
		std::vector<int> prices = {0, 1, 3, 5, 4, 8, 7, 12, 15, 13, 16};
		const std::vector<int> expected = {2, 8};
		const auto output = algoExpert::dynamicProgramming::juiceBottling(prices);
		EXPECT_EQ(expected, output);
	}
	TEST(JuiceBottling, Case17)
	{
		std::vector<int> prices = {0, 1, 3, 5, 4, 10, 7, 12, 15, 13, 16};
		const std::vector<int> expected = {5, 5};
		const auto output = algoExpert::dynamicProgramming::juiceBottling(prices);
		EXPECT_EQ(expected, output);
	}
}
#endif
