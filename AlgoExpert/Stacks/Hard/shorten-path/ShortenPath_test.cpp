#include "ShortenPath.h"
#include "gtest/gtest.h"

namespace
{
	TEST(ShortenPath, Case01)
	{
		std::string path = "/foo/../test/../test/../foo//bar/./baz";
		const std::string expected = "/foo/bar/baz";
		const auto output = algoExpert::stacks::shortenPath(path);
		EXPECT_EQ(expected, output);
	}
	TEST(ShortenPath, Case02)
	{
		std::string path = "/foo/bar/baz";
		const std::string expected = "/foo/bar/baz";
		const auto output = algoExpert::stacks::shortenPath(path);
		EXPECT_EQ(expected, output);
	}
	TEST(ShortenPath, Case03)
	{
		std::string path = "foo/bar/baz";
		const std::string expected = "foo/bar/baz";
		const auto output = algoExpert::stacks::shortenPath(path);
		EXPECT_EQ(expected, output);
	}
	TEST(ShortenPath, Case04)
	{
		std::string path = "/../../foo/bar/baz";
		const std::string expected = "/foo/bar/baz";
		const auto output = algoExpert::stacks::shortenPath(path);
		EXPECT_EQ(expected, output);
	}
	TEST(ShortenPath, Case05)
	{
		std::string path = "../../foo/bar/baz";
		const std::string expected = "../../foo/bar/baz";
		const auto output = algoExpert::stacks::shortenPath(path);
		EXPECT_EQ(expected, output);
	}
	TEST(ShortenPath, Case06)
	{
		std::string path = "/../../foo/../../bar/baz";
		const std::string expected = "/bar/baz";
		const auto output = algoExpert::stacks::shortenPath(path);
		EXPECT_EQ(expected, output);
	}
	TEST(ShortenPath, Case07)
	{
		std::string path = "../../foo/../../bar/baz";
		const std::string expected = "../../../bar/baz";
		const auto output = algoExpert::stacks::shortenPath(path);
		EXPECT_EQ(expected, output);
	}
	TEST(ShortenPath, Case08)
	{
		std::string path = "/foo/./././bar/./baz///////////test/../../../kappa";
		const std::string expected = "/foo/kappa";
		const auto output = algoExpert::stacks::shortenPath(path);
		EXPECT_EQ(expected, output);
	}
	TEST(ShortenPath, Case09)
	{
		std::string path = "../../../this////one/./../../is/../../going/../../to/be/./././../../../just/eight/double/dots/../../../../../..";
		const std::string expected = "../../../../../../../..";
		const auto output = algoExpert::stacks::shortenPath(path);
		EXPECT_EQ(expected, output);
	}
	TEST(ShortenPath, Case10)
	{
		std::string path = "/../../../this////one/./../../is/../../going/../../to/be/./././../../../just/a/forward/slash/../../../../../..";
		const std::string expected = "/";
		const auto output = algoExpert::stacks::shortenPath(path);
		EXPECT_EQ(expected, output);
	}
	TEST(ShortenPath, Case11)
	{
		std::string path = "../../../this////one/./../../is/../../going/../../to/be/./././../../../just/eight/double/dots/../../../../../../foo";
		const std::string expected = "../../../../../../../../foo";
		const auto output = algoExpert::stacks::shortenPath(path);
		EXPECT_EQ(expected, output);
	}
	TEST(ShortenPath, Case12)
	{
		std::string path = "/../../../this////one/./../../is/../../going/../../to/be/./././../../../just/a/forward/slash/../../../../../../foo";
		const std::string expected = "/foo";
		const auto output = algoExpert::stacks::shortenPath(path);
		EXPECT_EQ(expected, output);
	}
	TEST(ShortenPath, Case13)
	{
		std::string path = "foo/bar/..";
		const std::string expected = "foo";
		const auto output = algoExpert::stacks::shortenPath(path);
		EXPECT_EQ(expected, output);
	}
	TEST(ShortenPath, Case14)
	{
		std::string path = "./foo/bar";
		const std::string expected = "foo/bar";
		const auto output = algoExpert::stacks::shortenPath(path);
		EXPECT_EQ(expected, output);
	}
	TEST(ShortenPath, Case15)
	{
		std::string path = "foo/../..";
		const std::string expected = "..";
		const auto output = algoExpert::stacks::shortenPath(path);
		EXPECT_EQ(expected, output);
	}
	TEST(ShortenPath, Case16)
	{
		std::string path = "/";
		const std::string expected = "/";
		const auto output = algoExpert::stacks::shortenPath(path);
		EXPECT_EQ(expected, output);
	}
	TEST(ShortenPath, Case17)
	{
		std::string path = "./..";
		const std::string expected = "..";
		const auto output = algoExpert::stacks::shortenPath(path);
		EXPECT_EQ(expected, output);
	}
}
