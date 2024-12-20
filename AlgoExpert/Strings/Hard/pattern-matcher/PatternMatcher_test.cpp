#include "PatternMatcher.h"
#include "gtest/gtest.h"

namespace
{
	TEST(PatternMatcher, Case01)
	{
		std::string pattern = "xxyxxy";
		std::string str = "gogopowerrangergogopowerranger";
		const std::vector<std::string> expected = {"go", "powerranger"};
		const auto output = algoExpert::strings::patternMatcher(pattern, str);
		EXPECT_EQ(expected, output);
	}
	TEST(PatternMatcher, Case02)
	{
		std::string pattern = "xyxy";
		std::string str = "abab";
		const std::vector<std::string> expected = {"a", "b"};
		const auto output = algoExpert::strings::patternMatcher(pattern, str);
		EXPECT_EQ(expected, output);
	}
	TEST(PatternMatcher, Case03)
	{
		std::string pattern = "yxyx";
		std::string str = "abab";
		const std::vector<std::string> expected = {"b", "a"};
		const auto output = algoExpert::strings::patternMatcher(pattern, str);
		EXPECT_EQ(expected, output);
	}
	TEST(PatternMatcher, Case04)
	{
		std::string pattern = "yxx";
		std::string str = "yomama";
		const std::vector<std::string> expected = {"ma", "yo"};
		const auto output = algoExpert::strings::patternMatcher(pattern, str);
		EXPECT_EQ(expected, output);
	}
	TEST(PatternMatcher, Case05)
	{
		std::string pattern = "yyxyyx";
		std::string str = "gogopowerrangergogopowerranger";
		const std::vector<std::string> expected = {"powerranger", "go"};
		const auto output = algoExpert::strings::patternMatcher(pattern, str);
		EXPECT_EQ(expected, output);
	}
	TEST(PatternMatcher, Case06)
	{
		std::string pattern = "xyx";
		std::string str = "thisshouldobviouslybewrong";
		const std::vector<std::string> expected = {};
		const auto output = algoExpert::strings::patternMatcher(pattern, str);
		EXPECT_EQ(expected, output);
	}
	TEST(PatternMatcher, Case07)
	{
		std::string pattern = "xxxx";
		std::string str = "testtesttesttest";
		const std::vector<std::string> expected = {"test", ""};
		const auto output = algoExpert::strings::patternMatcher(pattern, str);
		EXPECT_EQ(expected, output);
	}
	TEST(PatternMatcher, Case08)
	{
		std::string pattern = "yyyy";
		std::string str = "testtesttesttest";
		const std::vector<std::string> expected = {"", "test"};
		const auto output = algoExpert::strings::patternMatcher(pattern, str);
		EXPECT_EQ(expected, output);
	}
	TEST(PatternMatcher, Case09)
	{
		std::string pattern = "xxyxyy";
		std::string str = "testtestwrongtestwrongtest";
		const std::vector<std::string> expected = {};
		const auto output = algoExpert::strings::patternMatcher(pattern, str);
		EXPECT_EQ(expected, output);
	}
	TEST(PatternMatcher, Case10)
	{
		std::string pattern = "xyxxxyyx";
		std::string str = "baddaddoombaddadoomibaddaddoombaddaddoombaddaddoombaddaddoomibaddaddoomibaddaddoom";
		const std::vector<std::string> expected = {};
		const auto output = algoExpert::strings::patternMatcher(pattern, str);
		EXPECT_EQ(expected, output);
	}
	TEST(PatternMatcher, Case11)
	{
		std::string pattern = "yxyyyxxy";
		std::string str = "baddaddoombaddaddoomibaddaddoombaddaddoombaddaddoombaddaddoomibaddaddoomibaddaddoom";
		const std::vector<std::string> expected = {"baddaddoomi", "baddaddoom"};
		const auto output = algoExpert::strings::patternMatcher(pattern, str);
		EXPECT_EQ(expected, output);
	}
	TEST(PatternMatcher, Case12)
	{
		std::string pattern = "xyxxxyyx";
		std::string str = "baddaddoombaddaddoomibaddaddoombaddaddoombaddaddoombaddaddoomibaddaddoomibaddaddoom";
		const std::vector<std::string> expected = {"baddaddoom", "baddaddoomi"};
		const auto output = algoExpert::strings::patternMatcher(pattern, str);
		EXPECT_EQ(expected, output);
	}
}
