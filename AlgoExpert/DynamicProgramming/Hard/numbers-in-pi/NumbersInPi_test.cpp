#include "NumbersInPi.h"
#include "gtest/gtest.h"

#if 0
namespace
{
	TEST(NumbersInPi, Case01)
	{
		std::vector<std::string> numbers = {"314159265358979323846", "26433", "8", "3279", "314159265", "35897932384626433832", "79"};
		std::string pi = "3141592653589793238462643383279";
		const auto expected = 2;
		const auto output = algoExpert::dynamicProgramming::numbersInPi(pi, numbers);
		EXPECT_EQ(expected, output);
	}
	TEST(NumbersInPi, Case02)
	{
		std::vector<std::string> numbers = {"314159265358979323846264338327", "9"};
		std::string pi = "3141592653589793238462643383279";
		const auto expected = 1;
		const auto output = algoExpert::dynamicProgramming::numbersInPi(pi, numbers);
		EXPECT_EQ(expected, output);
	}
	TEST(NumbersInPi, Case03)
	{
		std::vector<std::string> numbers = {"3", "314", "49", "9001", "15926535897", "14", "9323", "8462643383279", "4", "793"};
		std::string pi = "3141592653589793238462643383279";
		const auto expected = 3;
		const auto output = algoExpert::dynamicProgramming::numbersInPi(pi, numbers);
		EXPECT_EQ(expected, output);
	}
	TEST(NumbersInPi, Case04)
	{
		std::vector<std::string> numbers = {"3141592653589793238462643383279"};
		std::string pi = "3141592653589793238462643383279";
		const auto expected = 0;
		const auto output = algoExpert::dynamicProgramming::numbersInPi(pi, numbers);
		EXPECT_EQ(expected, output);
	}
	TEST(NumbersInPi, Case05)
	{
		std::vector<std::string> numbers = {"3141", "1512", "159", "793", "12412451", "8462643383279"};
		std::string pi = "3141592653589793238462643383279";
		const auto expected = -1;
		const auto output = algoExpert::dynamicProgramming::numbersInPi(pi, numbers);
		EXPECT_EQ(expected, output);
	}
	TEST(NumbersInPi, Case06)
	{
		std::vector<std::string> numbers = {"314159265358979323846", "327", "26433", "8", "3279", "9", "314159265", "35897932384626433832", "79"};
		std::string pi = "3141592653589793238462643383279";
		const auto expected = 2;
		const auto output = algoExpert::dynamicProgramming::numbersInPi(pi, numbers);
		EXPECT_EQ(expected, output);
	}
	TEST(NumbersInPi, Case07)
	{
		std::vector<std::string> numbers = {"141592653589793238462643383279", "314159265358979323846", "327", "26433", "8", "3279", "9", "314159265", "35897932384626433832", "79", "3"};
		std::string pi = "3141592653589793238462643383279";
		const auto expected = 1;
		const auto output = algoExpert::dynamicProgramming::numbersInPi(pi, numbers);
		EXPECT_EQ(expected, output);
	}
	TEST(NumbersInPi, Case08)
	{
		std::vector<std::string> numbers = {"3", "1", "4", "592", "65", "55", "35", "8", "9793", "2384626", "83279"};
		std::string pi = "3141592653589793238462643383279";
		const auto expected = 13;
		const auto output = algoExpert::dynamicProgramming::numbersInPi(pi, numbers);
		EXPECT_EQ(expected, output);
	}
	TEST(NumbersInPi, Case09)
	{
		std::vector<std::string> numbers = {"3", "1", "4", "592", "65", "55", "35", "8", "9793", "2384626", "383279"};
		std::string pi = "3141592653589793238462643383279";
		const auto expected = 12;
		const auto output = algoExpert::dynamicProgramming::numbersInPi(pi, numbers);
		EXPECT_EQ(expected, output);
	}
	TEST(NumbersInPi, Case10)
	{
		std::vector<std::string> numbers = {"3", "141", "592", "65", "55", "35", "8", "9793", "2384626", "383279"};
		std::string pi = "3141592653589793238462643383279";
		const auto expected = -1;
		const auto output = algoExpert::dynamicProgramming::numbersInPi(pi, numbers);
		EXPECT_EQ(expected, output);
	}
	TEST(NumbersInPi, Case11)
	{
		std::vector<std::string> numbers = {"3", "141", "592", "65", "55", "35", "8", "9793", "23846264", "383279"};
		std::string pi = "3141592653589793238462643383279";
		const auto expected = 9;
		const auto output = algoExpert::dynamicProgramming::numbersInPi(pi, numbers);
		EXPECT_EQ(expected, output);
	}
	TEST(NumbersInPi, Case12)
	{
		std::vector<std::string> numbers = {"3", "141", "592", "65", "55", "35", "8", "9793", "23846264", "3832798"};
		std::string pi = "3141592653589793238462643383279";
		const auto expected = -1;
		const auto output = algoExpert::dynamicProgramming::numbersInPi(pi, numbers);
		EXPECT_EQ(expected, output);
	}
}
#endif
