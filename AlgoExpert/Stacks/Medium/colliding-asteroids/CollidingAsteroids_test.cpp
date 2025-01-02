#include "CollidingAsteroids.h"
#include "gtest/gtest.h"

namespace
{
	TEST(CollidingAsteroids, Case01)
	{
		std::vector<int> asteroids = {5};
		const std::vector<int> expected = {5};
		const auto output = algoExpert::stacks::collidingAsteroids(asteroids);
		EXPECT_EQ(expected, output);
	}
	TEST(CollidingAsteroids, Case02)
	{
		std::vector<int> asteroids = {-5};
		const std::vector<int> expected = {-5};
		const auto output = algoExpert::stacks::collidingAsteroids(asteroids);
		EXPECT_EQ(expected, output);
	}
	TEST(CollidingAsteroids, Case03)
	{
		std::vector<int> asteroids = {5, -5};
		const std::vector<int> expected = {};
		const auto output = algoExpert::stacks::collidingAsteroids(asteroids);
		EXPECT_EQ(expected, output);
	}
	TEST(CollidingAsteroids, Case04)
	{
		std::vector<int> asteroids = {-5, 5};
		const std::vector<int> expected = {-5, 5};
		const auto output = algoExpert::stacks::collidingAsteroids(asteroids);
		EXPECT_EQ(expected, output);
	}
	TEST(CollidingAsteroids, Case05)
	{
		std::vector<int> asteroids = {-5, -5};
		const std::vector<int> expected = {-5, -5};
		const auto output = algoExpert::stacks::collidingAsteroids(asteroids);
		EXPECT_EQ(expected, output);
	}
	TEST(CollidingAsteroids, Case06)
	{
		std::vector<int> asteroids = {5, 5};
		const std::vector<int> expected = {5, 5};
		const auto output = algoExpert::stacks::collidingAsteroids(asteroids);
		EXPECT_EQ(expected, output);
	}
	TEST(CollidingAsteroids, Case07)
	{
		std::vector<int> asteroids = {1, 2, 3, 4, 5};
		const std::vector<int> expected = {1, 2, 3, 4, 5};
		const auto output = algoExpert::stacks::collidingAsteroids(asteroids);
		EXPECT_EQ(expected, output);
	}
	TEST(CollidingAsteroids, Case08)
	{
		std::vector<int> asteroids = {34, 2, 5, 42, 100, 20};
		const std::vector<int> expected = {34, 2, 5, 42, 100, 20};
		const auto output = algoExpert::stacks::collidingAsteroids(asteroids);
		EXPECT_EQ(expected, output);
	}
	TEST(CollidingAsteroids, Case09)
	{
		std::vector<int> asteroids = {-6, -2, -10, -100, -30};
		const std::vector<int> expected = {-6, -2, -10, -100, -30};
		const auto output = algoExpert::stacks::collidingAsteroids(asteroids);
		EXPECT_EQ(expected, output);
	}
	TEST(CollidingAsteroids, Case10)
	{
		std::vector<int> asteroids = {1, 2, 3, -4};
		const std::vector<int> expected = {-4};
		const auto output = algoExpert::stacks::collidingAsteroids(asteroids);
		EXPECT_EQ(expected, output);
	}
	TEST(CollidingAsteroids, Case11)
	{
		std::vector<int> asteroids = {4, -1, -2, -3};
		const std::vector<int> expected = {4};
		const auto output = algoExpert::stacks::collidingAsteroids(asteroids);
		EXPECT_EQ(expected, output);
	}
	TEST(CollidingAsteroids, Case12)
	{
		std::vector<int> asteroids = {-3, 7, -8, 6, 7, -5, -7};
		const std::vector<int> expected = {-3, -8, 6};
		const auto output = algoExpert::stacks::collidingAsteroids(asteroids);
		EXPECT_EQ(expected, output);
	}
	TEST(CollidingAsteroids, Case13)
	{
		std::vector<int> asteroids = {4, -5, -5, -5};
		const std::vector<int> expected = {-5, -5, -5};
		const auto output = algoExpert::stacks::collidingAsteroids(asteroids);
		EXPECT_EQ(expected, output);
	}
	TEST(CollidingAsteroids, Case14)
	{
		std::vector<int> asteroids = {6, -5, -5, -5};
		const std::vector<int> expected = {6};
		const auto output = algoExpert::stacks::collidingAsteroids(asteroids);
		EXPECT_EQ(expected, output);
	}
	TEST(CollidingAsteroids, Case15)
	{
		std::vector<int> asteroids = {4, 7, -3, -5, 6, -10, 100, -50, 99};
		const std::vector<int> expected = {-10, 100, 99};
		const auto output = algoExpert::stacks::collidingAsteroids(asteroids);
		EXPECT_EQ(expected, output);
	}
	TEST(CollidingAsteroids, Case16)
	{
		std::vector<int> asteroids = {-70, 100, 23, 42, -50, -75, 1, -2, -3};
		const std::vector<int> expected = {-70, 100};
		const auto output = algoExpert::stacks::collidingAsteroids(asteroids);
		EXPECT_EQ(expected, output);
	}
	TEST(CollidingAsteroids, Case17)
	{
		std::vector<int> asteroids = {-70, 10, 23, 42, -50, -75, 1, -2, -3};
		const std::vector<int> expected = {-70, -50, -75, -2, -3};
		const auto output = algoExpert::stacks::collidingAsteroids(asteroids);
		EXPECT_EQ(expected, output);
	}
	TEST(CollidingAsteroids, Case18)
	{
		std::vector<int> asteroids = {42, 30, 12, 65, -50, 32, -15, -25};
		const std::vector<int> expected = {42, 30, 12, 65, 32};
		const auto output = algoExpert::stacks::collidingAsteroids(asteroids);
		EXPECT_EQ(expected, output);
	}
	TEST(CollidingAsteroids, Case19)
	{
		std::vector<int> asteroids = {5123, -34, 654, -3636, 2432, 4242, 1267, 1337, -43, -864, 38, 38, 1, -400};
		const std::vector<int> expected = {5123, 2432, 4242, 1267, 1337};
		const auto output = algoExpert::stacks::collidingAsteroids(asteroids);
		EXPECT_EQ(expected, output);
	}
	TEST(CollidingAsteroids, Case20)
	{
		std::vector<int> asteroids = {651, 13, -1246, 754, 1252, -300, 5468, -5200, 22, 17, -100, 87, 100, -250, 1};
		const std::vector<int> expected = {-1246, 754, 1252, 5468, 1};
		const auto output = algoExpert::stacks::collidingAsteroids(asteroids);
		EXPECT_EQ(expected, output);
	}
}

