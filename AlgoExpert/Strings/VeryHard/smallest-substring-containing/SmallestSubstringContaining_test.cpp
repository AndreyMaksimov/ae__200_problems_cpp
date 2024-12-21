#include "SmallestSubstringContaining.h"
#include "gtest/gtest.h"

namespace
{
	TEST(SmallestSubstringContaining, Case01)
	{
		std::string bigString = "abcd$ef$axb$c$";
		std::string smallString = "$$abf";
		const std::string expected = "f$axb$";
		const auto output = algoExpert::strings::smallestSubstringContaining(bigString, smallString);
		EXPECT_EQ(expected, output);
	}
	TEST(SmallestSubstringContaining, Case02)
	{
		std::string bigString = "abcdef";
		std::string smallString = "fa";
		const std::string expected = "abcdef";
		const auto output = algoExpert::strings::smallestSubstringContaining(bigString, smallString);
		EXPECT_EQ(expected, output);
	}
	TEST(SmallestSubstringContaining, Case03)
	{
		std::string bigString = "abcdef";
		std::string smallString = "d";
		const std::string expected = "d";
		const auto output = algoExpert::strings::smallestSubstringContaining(bigString, smallString);
		EXPECT_EQ(expected, output);
	}
	TEST(SmallestSubstringContaining, Case04)
	{
		std::string bigString = "abcdefghijklmnopqrstuvwxyz";
		std::string smallString = "aajjttwwxxzz";
		const std::string expected = "";
		const auto output = algoExpert::strings::smallestSubstringContaining(bigString, smallString);
		EXPECT_EQ(expected, output);
	}
	TEST(SmallestSubstringContaining, Case05)
	{
		std::string bigString = "abzacdwejxjftghiwjtklmnopqrstuvwxyz";
		std::string smallString = "aajjttwwxxzz";
		const std::string expected = "abzacdwejxjftghiwjtklmnopqrstuvwxyz";
		const auto output = algoExpert::strings::smallestSubstringContaining(bigString, smallString);
		EXPECT_EQ(expected, output);
	}
	TEST(SmallestSubstringContaining, Case06)
	{
		std::string bigString = "abzacdwejxjfxztghiwjtklmnopqrstuvwxyz";
		std::string smallString = "aajjttwwxxzz";
		const std::string expected = "abzacdwejxjfxztghiwjt";
		const auto output = algoExpert::strings::smallestSubstringContaining(bigString, smallString);
		EXPECT_EQ(expected, output);
	}
	TEST(SmallestSubstringContaining, Case07)
	{
		std::string bigString = "aaaa+a$+aaa++$+++++++aaa";
		std::string smallString = "a+$aaAaaaa$++";
		const std::string expected = "";
		const auto output = algoExpert::strings::smallestSubstringContaining(bigString, smallString);
		EXPECT_EQ(expected, output);
	}
	TEST(SmallestSubstringContaining, Case08)
	{
		std::string bigString = "a$fuu+afff+affaffa+a$Affab+a+a+$a$";
		std::string smallString = "a+$aaAaaaa$++";
		const std::string expected = "affa+a$Affab+a+a+$a";
		const auto output = algoExpert::strings::smallestSubstringContaining(bigString, smallString);
		EXPECT_EQ(expected, output);
	}
	TEST(SmallestSubstringContaining, Case09)
	{
		std::string bigString = "a$fuu+afff+affaffa+a$Affab+a+a+$a$bccgtt+aaaacA+++aaa$";
		std::string smallString = "a+$aaAaaaa$++";
		const std::string expected = "affa+a$Affab+a+a+$a";
		const auto output = algoExpert::strings::smallestSubstringContaining(bigString, smallString);
		EXPECT_EQ(expected, output);
	}
	TEST(SmallestSubstringContaining, Case10)
	{
		std::string bigString = "145624356128828193236336541277356789901";
		std::string smallString = "123";
		const auto expected = "1932";
		const auto output = algoExpert::strings::smallestSubstringContaining(bigString, smallString);
		EXPECT_EQ(expected, output);
	}
	TEST(SmallestSubstringContaining, Case11)
	{
		std::string bigString = "1456243561288281932363365412356789901!";
		std::string smallString = "123!";
		const std::string expected = "2356789901!";
		const auto output = algoExpert::strings::smallestSubstringContaining(bigString, smallString);
		EXPECT_EQ(expected, output);
	}
	TEST(SmallestSubstringContaining, Case12)
	{
		std::string bigString = "14562435612!88281932363365$412356789901";
		std::string smallString = "$123!";
		const std::string expected = "!88281932363365$";
		const auto output = algoExpert::strings::smallestSubstringContaining(bigString, smallString);
		EXPECT_EQ(expected, output);
	}
	TEST(SmallestSubstringContaining, Case13)
	{
		std::string bigString = "14562435612!88281932363365$412356789901";
		std::string smallString = "#!123!";
		const std::string expected = "";
		const auto output = algoExpert::strings::smallestSubstringContaining(bigString, smallString);
		EXPECT_EQ(expected, output);
	}
	TEST(SmallestSubstringContaining, Case14)
	{
		std::string bigString = "14562435612!88281932363365$412356789901";
		std::string smallString = "#!333333123!";
		const std::string expected = "";
		const auto output = algoExpert::strings::smallestSubstringContaining(bigString, smallString);
		EXPECT_EQ(expected, output);
	}
	TEST(SmallestSubstringContaining, Case15)
	{
		std::string bigString = "14562435612z!8828!193236!336!5$41!23!5!6789901#";
		std::string smallString = "#!2z";
		const std::string expected = "z!8828!193236!336!5$41!23!5!6789901#";
		const auto output = algoExpert::strings::smallestSubstringContaining(bigString, smallString);
		EXPECT_EQ(expected, output);
	}
	TEST(SmallestSubstringContaining, Case16)
	{
		std::string bigString = "14562435612z!8828!193236!336!5$41!23!5!6789901#z2!";
		std::string smallString = "#!2z";
		const std::string expected = "#z2!";
		const auto output = algoExpert::strings::smallestSubstringContaining(bigString, smallString);
		EXPECT_EQ(expected, output);
	}
}
