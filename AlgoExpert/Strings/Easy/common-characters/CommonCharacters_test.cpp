#include "CommonCharacters.h"
#include "gtest/gtest.h"

namespace
{
	TEST(CommonCharacters, Case01)
	{
		std::vector<std::string> strings = {"abc", "bcd", "cbad"};
		const std::vector<std::string> expected = {"b", "c"};
		const auto output = algoExpert::strings::commonCharacters(strings);
		EXPECT_EQ(expected, output);
	}
	TEST(CommonCharacters, Case02)
	{
		std::vector<std::string> strings = {"a"};
		const std::vector<std::string> expected = {"a"};
		const auto output = algoExpert::strings::commonCharacters(strings);
		EXPECT_EQ(expected, output);
	}
	TEST(CommonCharacters, Case03)
	{
		std::vector<std::string> strings = {"aa", "aa"};
		const std::vector<std::string> expected = {"a"};
		const auto output = algoExpert::strings::commonCharacters(strings);
		EXPECT_EQ(expected, output);
	}
	TEST(CommonCharacters, Case05)
	{
		std::vector<std::string> strings = {"aaaa", "a"};
		const std::vector<std::string> expected = {"a"};
		const auto output = algoExpert::strings::commonCharacters(strings);
		EXPECT_EQ(expected, output);
	}
	TEST(CommonCharacters, Case06)
	{
		std::vector<std::string> strings = {"abcde", "aa", "foobar", "foobaz", "and this is a string", "aaaaaaaa", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeea"};
		const std::vector<std::string> expected = {"a"};
		const auto output = algoExpert::strings::commonCharacters(strings);
		EXPECT_EQ(expected, output);
	}
	TEST(CommonCharacters, Case07)
	{
		std::vector<std::string> strings = {"abcdef", "fedcba", "abcefd", "aefbcd", "efadbc", "effffffffffffbcda", "eeeeeffffffbbbbbaaaaaccccdddd", "**************abdcef************"};
		const std::vector<std::string> expected = {"a", "b", "c", "d", "e", "f"};
		const auto output = algoExpert::strings::commonCharacters(strings);
		EXPECT_EQ(expected, output);
	}
	TEST(CommonCharacters, Case08)
	{
		std::vector<std::string> strings = {"ab&cdef!", "f!ed&cba", "a&bce!d", "ae&fb!cd", "efa&!dbc", "eff!&fff&fffffffbcda", "eeee!efff&fffbbbbbaaaaaccccdddd", "*******!***&****abdcef************", "*******!***&****a***********f*", "*******!***&****b***********c*"};
		const std::vector<std::string> expected = {"!", "&"};
		const auto output = algoExpert::strings::commonCharacters(strings);
		EXPECT_EQ(expected, output);
	}
	TEST(CommonCharacters, Case09)
	{
		std::vector<std::string> strings = {"*abcd", "def*", "******d*****"};
		const std::vector<std::string> expected = {"*", "d"};
		const auto output = algoExpert::strings::commonCharacters(strings);
		EXPECT_EQ(expected, output);
	}
	TEST(CommonCharacters, Case10)
	{
		std::vector<std::string> strings = {"*abc!d", "de!f*", "**!!!****d*****"};
		const std::vector<std::string> expected = {"!", "*", "d"};
		const auto output = algoExpert::strings::commonCharacters(strings);
		EXPECT_EQ(expected, output);
	}
}
