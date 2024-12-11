#include "UnderscorifySubstring.h"
#include "gtest/gtest.h"

namespace
{
	TEST(UnderscorifySubstring, Case01)
	{
		std::string string = "testthis is a testtest to see if testestest it works";
		std::string substring = "test";
		const std::string expected = "_test_this is a _testtest_ to see if _testestest_ it works";
		const auto output = algoExpert::strings::underscorifySubstring(string, substring);
		EXPECT_EQ(expected, output);
	}
	TEST(UnderscorifySubstring, Case02)
	{
		std::string string = "this is a test to see if it works";
		std::string substring = "test";
		const std::string expected = "this is a _test_ to see if it works";
		const auto output = algoExpert::strings::underscorifySubstring(string, substring);
		EXPECT_EQ(expected, output);
	}
	TEST(UnderscorifySubstring, Case03)
	{
		std::string string = "test this is a test to see if it works";
		std::string substring = "test";
		const std::string expected = "_test_ this is a _test_ to see if it works";
		const auto output = algoExpert::strings::underscorifySubstring(string, substring);
		EXPECT_EQ(expected, output);
	}
	TEST(UnderscorifySubstring, Case04)
	{
		std::string string = "testthis is a test to see if it works";
		std::string substring = "test";
		const std::string expected = "_test_this is a _test_ to see if it works";
		const auto output = algoExpert::strings::underscorifySubstring(string, substring);
		EXPECT_EQ(expected, output);
	}
	TEST(UnderscorifySubstring, Case05)
	{
		std::string string = "testthis is a testest to see if testestes it works";
		std::string substring = "test";
		const std::string expected = "_test_this is a _testest_ to see if _testest_es it works";
		const auto output = algoExpert::strings::underscorifySubstring(string, substring);
		EXPECT_EQ(expected, output);
	}
	TEST(UnderscorifySubstring, Case06)
	{
		std::string string = "this is a test to see if it works and test";
		std::string substring = "test";
		const std::string expected = "this is a _test_ to see if it works and _test_";
		const auto output = algoExpert::strings::underscorifySubstring(string, substring);
		EXPECT_EQ(expected, output);
	}
	TEST(UnderscorifySubstring, Case07)
	{
		std::string string = "this is a test to see if it works and test";
		std::string substring = "bfjawkfja";
		const std::string expected = "this is a test to see if it works and test";
		const auto output = algoExpert::strings::underscorifySubstring(string, substring);
		EXPECT_EQ(expected, output);
	}
	TEST(UnderscorifySubstring, Case08)
	{
		std::string string = "ttttttttttttttbtttttctatawtatttttastvb";
		std::string substring = "ttt";
		const std::string expected = "_tttttttttttttt_b_ttttt_ctatawta_ttttt_astvb";
		const auto output = algoExpert::strings::underscorifySubstring(string, substring);
		EXPECT_EQ(expected, output);
	}
	TEST(UnderscorifySubstring, Case09)
	{
		std::string string = "tzttztttz";
		std::string substring = "ttt";
		const std::string expected = "tzttz_ttt_z";
		const auto output = algoExpert::strings::underscorifySubstring(string, substring);
		EXPECT_EQ(expected, output);
	}
	TEST(UnderscorifySubstring, Case10)
	{
		std::string string = "abababababababababababababaababaaabbababaa";
		std::string substring = "a";
		const std::string expected = "_a_b_a_b_a_b_a_b_a_b_a_b_a_b_a_b_a_b_a_b_a_b_a_b_a_b_aa_b_a_b_aaa_bb_a_b_a_b_aa_";
		const auto output = algoExpert::strings::underscorifySubstring(string, substring);
		EXPECT_EQ(expected, output);
	}
	TEST(UnderscorifySubstring, Case11)
	{
		std::string string = "abcabcabcabcabcabcabcabcabcabcabcabcabcabc";
		std::string substring = "abc";
		const std::string expected = "_abcabcabcabcabcabcabcabcabcabcabcabcabcabc_";
		const auto output = algoExpert::strings::underscorifySubstring(string, substring);
		EXPECT_EQ(expected, output);
	}
}

