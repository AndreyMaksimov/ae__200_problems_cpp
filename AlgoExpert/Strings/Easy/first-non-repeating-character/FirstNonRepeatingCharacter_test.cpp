#include "FirstNonRepeatingCharacter.h"
#include "gtest/gtest.h"

namespace
{
	TEST(FirstNonRepeatingCharacter, Case01)
	{
		std::string string = "abcdcaf";
		const auto expected = 1;
		const auto output = algoExpert::strings::firstNonRepeatingCharacter(string);
		EXPECT_EQ(expected, output);
	}
	TEST(FirstNonRepeatingCharacter, Case02)
	{
		std::string string = "faadabcbbebdf";
		const auto expected = 6;
		const auto output = algoExpert::strings::firstNonRepeatingCharacter(string);
		EXPECT_EQ(expected, output);
	}
	TEST(FirstNonRepeatingCharacter, Case03)
	{
		std::string string = "a";
		const auto expected = 0;
		const auto output = algoExpert::strings::firstNonRepeatingCharacter(string);
		EXPECT_EQ(expected, output);
	}
	TEST(FirstNonRepeatingCharacter, Case04)
	{
		std::string string = "ab";
		const auto expected = 0;
		const auto output = algoExpert::strings::firstNonRepeatingCharacter(string);
		EXPECT_EQ(expected, output);
	}
	TEST(FirstNonRepeatingCharacter, Case05)
	{
		std::string string = "abc";
		const auto expected = 0;
		const auto output = algoExpert::strings::firstNonRepeatingCharacter(string);
		EXPECT_EQ(expected, output);
	}
	TEST(FirstNonRepeatingCharacter, Case06)
	{
		std::string string = "abac";
		const auto expected = 1;
		const auto output = algoExpert::strings::firstNonRepeatingCharacter(string);
		EXPECT_EQ(expected, output);
	}
	TEST(FirstNonRepeatingCharacter, Case07)
	{
		std::string string = "ababac";
		const auto expected = 5;
		const auto output = algoExpert::strings::firstNonRepeatingCharacter(string);
		EXPECT_EQ(expected, output);
	}
	TEST(FirstNonRepeatingCharacter, Case08)
	{
		std::string string = "ababacc";
		const auto expected = -1;
		const auto output = algoExpert::strings::firstNonRepeatingCharacter(string);
		EXPECT_EQ(expected, output);
	}
	TEST(FirstNonRepeatingCharacter, Case09)
	{
		std::string string = "lmnopqldsafmnopqsa";
		const auto expected = 7;
		const auto output = algoExpert::strings::firstNonRepeatingCharacter(string);
		EXPECT_EQ(expected, output);
	}
	TEST(FirstNonRepeatingCharacter, Case10)
	{
		std::string string = "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxy";
		const auto expected = 25;
		const auto output = algoExpert::strings::firstNonRepeatingCharacter(string);
		EXPECT_EQ(expected, output);
	}
	TEST(FirstNonRepeatingCharacter, Case11)
	{
		std::string string = "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz";
		const auto expected = -1;
		const auto output = algoExpert::strings::firstNonRepeatingCharacter(string);
		EXPECT_EQ(expected, output);
	}
	TEST(FirstNonRepeatingCharacter, Case12)
	{
		std::string string = "";
		const auto expected = -1;
		const auto output = algoExpert::strings::firstNonRepeatingCharacter(string);
		EXPECT_EQ(expected, output);
	}
	TEST(FirstNonRepeatingCharacter, Case13)
	{
		std::string string = "ggyllaylacrhdzedddjsc";
		const auto expected = 10;
		const auto output = algoExpert::strings::firstNonRepeatingCharacter(string);
		EXPECT_EQ(expected, output);
	}
	TEST(FirstNonRepeatingCharacter, Case14)
	{
		std::string string = "aaaaaaaaaaaaaaaaaaaabbbbbbbbbbcccccccccccdddddddddddeeeeeeeeffghgh";
		const auto expected = -1;
		const auto output = algoExpert::strings::firstNonRepeatingCharacter(string);
		EXPECT_EQ(expected, output);
	}
	TEST(FirstNonRepeatingCharacter, Case15)
	{
		std::string string = "aabbccddeeff";
		const auto expected = -1;
		const auto output = algoExpert::strings::firstNonRepeatingCharacter(string);
		EXPECT_EQ(expected, output);
	}
}
