#include "FindClosestValueInBst.h"
#include "gtest/gtest.h"

namespace
{
	using namespace algoExpert::binarySearchTrees;
	TEST(FindClosestValueInBst, Case01)
	{
		int target = 12;
		std::vector<std::string> bst_data = {
				"id: 10, left: 5, right: 15, value: 10",
				"id: 15, left: 13, right: 22, value: 15",
				"id: 22, left: null, right: null, value: 22",
				"id: 13, left: null, right: 14, value: 13",
				"id: 14, left: null, right: null, value: 14",
				"id: 5, left: 2, right: 5-2, value: 5",
				"id: 5-2, left: null, right: null, value: 5",
				"id: 2, left: 1, right: null, value: 2",
				"id: 1, left: null, right: null, value: 1"
		};
		const auto root = 10;
		const auto tree = BST::CreateBST(root, bst_data);
		const auto expected = 13;
		const auto output = algoExpert::binarySearchTrees::findClosestValueInBst(target, tree);
		EXPECT_EQ(expected, output);
	}
	TEST(FindClosestValueInBst, Case02)
	{
		int target = 100;
		std::vector<std::string> bst_data = {
				"id: 100, left: 5, right: 502, value: 100",
				"id: 502, left: 204, right: 55000, value: 502",
				"id: 55000, left: 1001, right: null, value: 55000",
				"id: 1001, left: null, right: 4500, value: 1001",
				"id: 4500, left: null, right: null, value: 4500",
				"id: 204, left: 203, right: 205, value: 204",
				"id: 205, left: null, right: 207, value: 205",
				"id: 207, left: 206, right: 208, value: 207",
				"id: 208, left: null, right: null, value: 208",
				"id: 206, left: null, right: null, value: 206",
				"id: 203, left: null, right: null, value: 203",
				"id: 5, left: 2, right: 15, value: 5",
				"id: 15, left: 5-2, right: 22, value: 15",
				"id: 22, left: null, right: 57, value: 22",
				"id: 57, left: null, right: 60, value: 57",
				"id: 60, left: null, right: null, value: 60",
				"id: 5-2, left: null, right: null, value: 5",
				"id: 2, left: 1, right: 3, value: 2",
				"id: 3, left: null, right: null, value: 3",
				"id: 1, left: -51, right: 1-2, value: 1",
				"id: 1-2, left: null, right: 1-3, value: 1",
				"id: 1-3, left: null, right: 1-4, value: 1",
				"id: 1-4, left: null, right: 1-5, value: 1",
				"id: 1-5, left: null, right: null, value: 1",
				"id: -51, left: -403, right: null, value: -51",
				"id: -403, left: null, right: null, value: -403"
		};
		const auto root = 100;
		const auto tree = BST::CreateBST(root, bst_data);
		const auto expected = 100;
		const auto output = algoExpert::binarySearchTrees::findClosestValueInBst(target, tree);
		EXPECT_EQ(expected, output);
	}
	TEST(FindClosestValueInBst, Case03)
	{
		int target = 208;
		std::vector<std::string> bst_data = {
				"id: 100, left: 5, right: 502, value: 100",
				"id: 502, left: 204, right: 55000, value: 502",
				"id: 55000, left: 1001, right: null, value: 55000",
				"id: 1001, left: null, right: 4500, value: 1001",
				"id: 4500, left: null, right: null, value: 4500",
				"id: 204, left: 203, right: 205, value: 204",
				"id: 205, left: null, right: 207, value: 205",
				"id: 207, left: 206, right: 208, value: 207",
				"id: 208, left: null, right: null, value: 208",
				"id: 206, left: null, right: null, value: 206",
				"id: 203, left: null, right: null, value: 203",
				"id: 5, left: 2, right: 15, value: 5",
				"id: 15, left: 5-2, right: 22, value: 15",
				"id: 22, left: null, right: 57, value: 22",
				"id: 57, left: null, right: 60, value: 57",
				"id: 60, left: null, right: null, value: 60",
				"id: 5-2, left: null, right: null, value: 5",
				"id: 2, left: 1, right: 3, value: 2",
				"id: 3, left: null, right: null, value: 3",
				"id: 1, left: -51, right: 1-2, value: 1",
				"id: 1-2, left: null, right: 1-3, value: 1",
				"id: 1-3, left: null, right: 1-4, value: 1",
				"id: 1-4, left: null, right: 1-5, value: 1",
				"id: 1-5, left: null, right: null, value: 1",
				"id: -51, left: -403, right: null, value: -51",
				"id: -403, left: null, right: null, value: -403"
		};
		const auto root = 100;
		const auto tree = BST::CreateBST(root, bst_data);
		const auto expected = 208;
		const auto output = algoExpert::binarySearchTrees::findClosestValueInBst(target, tree);
		EXPECT_EQ(expected, output);
	}
	TEST(FindClosestValueInBst, Case04)
	{
		int target = 4500;
		std::vector<std::string> bst_data = {
				"id: 100, left: 5, right: 502, value: 100",
				"id: 502, left: 204, right: 55000, value: 502",
				"id: 55000, left: 1001, right: null, value: 55000",
				"id: 1001, left: null, right: 4500, value: 1001",
				"id: 4500, left: null, right: null, value: 4500",
				"id: 204, left: 203, right: 205, value: 204",
				"id: 205, left: null, right: 207, value: 205",
				"id: 207, left: 206, right: 208, value: 207",
				"id: 208, left: null, right: null, value: 208",
				"id: 206, left: null, right: null, value: 206",
				"id: 203, left: null, right: null, value: 203",
				"id: 5, left: 2, right: 15, value: 5",
				"id: 15, left: 5-2, right: 22, value: 15",
				"id: 22, left: null, right: 57, value: 22",
				"id: 57, left: null, right: 60, value: 57",
				"id: 60, left: null, right: null, value: 60",
				"id: 5-2, left: null, right: null, value: 5",
				"id: 2, left: 1, right: 3, value: 2",
				"id: 3, left: null, right: null, value: 3",
				"id: 1, left: -51, right: 1-2, value: 1",
				"id: 1-2, left: null, right: 1-3, value: 1",
				"id: 1-3, left: null, right: 1-4, value: 1",
				"id: 1-4, left: null, right: 1-5, value: 1",
				"id: 1-5, left: null, right: null, value: 1",
				"id: -51, left: -403, right: null, value: -51",
				"id: -403, left: null, right: null, value: -403"
		};
		const auto root = 100;
		const auto tree = BST::CreateBST(root, bst_data);
		const auto expected = 4500;
		const auto output = algoExpert::binarySearchTrees::findClosestValueInBst(target, tree);
		EXPECT_EQ(expected, output);
	}
	TEST(FindClosestValueInBst, Case05)
	{
		int target = 4501;
		std::vector<std::string> bst_data = {
				"id: 100, left: 5, right: 502, value: 100",
				"id: 502, left: 204, right: 55000, value: 502",
				"id: 55000, left: 1001, right: null, value: 55000",
				"id: 1001, left: null, right: 4500, value: 1001",
				"id: 4500, left: null, right: null, value: 4500",
				"id: 204, left: 203, right: 205, value: 204",
				"id: 205, left: null, right: 207, value: 205",
				"id: 207, left: 206, right: 208, value: 207",
				"id: 208, left: null, right: null, value: 208",
				"id: 206, left: null, right: null, value: 206",
				"id: 203, left: null, right: null, value: 203",
				"id: 5, left: 2, right: 15, value: 5",
				"id: 15, left: 5-2, right: 22, value: 15",
				"id: 22, left: null, right: 57, value: 22",
				"id: 57, left: null, right: 60, value: 57",
				"id: 60, left: null, right: null, value: 60",
				"id: 5-2, left: null, right: null, value: 5",
				"id: 2, left: 1, right: 3, value: 2",
				"id: 3, left: null, right: null, value: 3",
				"id: 1, left: -51, right: 1-2, value: 1",
				"id: 1-2, left: null, right: 1-3, value: 1",
				"id: 1-3, left: null, right: 1-4, value: 1",
				"id: 1-4, left: null, right: 1-5, value: 1",
				"id: 1-5, left: null, right: null, value: 1",
				"id: -51, left: -403, right: null, value: -51",
				"id: -403, left: null, right: null, value: -403"
		};
		const auto root = 100;
		const auto tree = BST::CreateBST(root, bst_data);
		const auto expected = 4500;
		const auto output = algoExpert::binarySearchTrees::findClosestValueInBst(target, tree);
		EXPECT_EQ(expected, output);
	}
	TEST(FindClosestValueInBst, Case06)
	{
		int target = -70;
		std::vector<std::string> bst_data = {
				"id: 100, left: 5, right: 502, value: 100",
				"id: 502, left: 204, right: 55000, value: 502",
				"id: 55000, left: 1001, right: null, value: 55000",
				"id: 1001, left: null, right: 4500, value: 1001",
				"id: 4500, left: null, right: null, value: 4500",
				"id: 204, left: 203, right: 205, value: 204",
				"id: 205, left: null, right: 207, value: 205",
				"id: 207, left: 206, right: 208, value: 207",
				"id: 208, left: null, right: null, value: 208",
				"id: 206, left: null, right: null, value: 206",
				"id: 203, left: null, right: null, value: 203",
				"id: 5, left: 2, right: 15, value: 5",
				"id: 15, left: 5-2, right: 22, value: 15",
				"id: 22, left: null, right: 57, value: 22",
				"id: 57, left: null, right: 60, value: 57",
				"id: 60, left: null, right: null, value: 60",
				"id: 5-2, left: null, right: null, value: 5",
				"id: 2, left: 1, right: 3, value: 2",
				"id: 3, left: null, right: null, value: 3",
				"id: 1, left: -51, right: 1-2, value: 1",
				"id: 1-2, left: null, right: 1-3, value: 1",
				"id: 1-3, left: null, right: 1-4, value: 1",
				"id: 1-4, left: null, right: 1-5, value: 1",
				"id: 1-5, left: null, right: null, value: 1",
				"id: -51, left: -403, right: null, value: -51",
				"id: -403, left: null, right: null, value: -403"
		};
		const auto root = 100;
		const auto tree = BST::CreateBST(root, bst_data);
		const auto expected = -51;
		const auto output = algoExpert::binarySearchTrees::findClosestValueInBst(target, tree);
		EXPECT_EQ(expected, output);
	}
	TEST(FindClosestValueInBst, Case07)
	{
		int target = 2000;
		std::vector<std::string> bst_data = {
				"id: 100, left: 5, right: 502, value: 100",
				"id: 502, left: 204, right: 55000, value: 502",
				"id: 55000, left: 1001, right: null, value: 55000",
				"id: 1001, left: null, right: 4500, value: 1001",
				"id: 4500, left: null, right: null, value: 4500",
				"id: 204, left: 203, right: 205, value: 204",
				"id: 205, left: null, right: 207, value: 205",
				"id: 207, left: 206, right: 208, value: 207",
				"id: 208, left: null, right: null, value: 208",
				"id: 206, left: null, right: null, value: 206",
				"id: 203, left: null, right: null, value: 203",
				"id: 5, left: 2, right: 15, value: 5",
				"id: 15, left: 5-2, right: 22, value: 15",
				"id: 22, left: null, right: 57, value: 22",
				"id: 57, left: null, right: 60, value: 57",
				"id: 60, left: null, right: null, value: 60",
				"id: 5-2, left: null, right: null, value: 5",
				"id: 2, left: 1, right: 3, value: 2",
				"id: 3, left: null, right: null, value: 3",
				"id: 1, left: -51, right: 1-2, value: 1",
				"id: 1-2, left: null, right: 1-3, value: 1",
				"id: 1-3, left: null, right: 1-4, value: 1",
				"id: 1-4, left: null, right: 1-5, value: 1",
				"id: 1-5, left: null, right: null, value: 1",
				"id: -51, left: -403, right: null, value: -51",
				"id: -403, left: null, right: null, value: -403"
		};
		const auto root = 100;
		const auto tree = BST::CreateBST(root, bst_data);
		const auto expected = 1001;
		const auto output = algoExpert::binarySearchTrees::findClosestValueInBst(target, tree);
		EXPECT_EQ(expected, output);
	}
	TEST(FindClosestValueInBst, Case08)
	{
		int target = 6;
		std::vector<std::string> bst_data = {
				"id: 100, left: 5, right: 502, value: 100",
				"id: 502, left: 204, right: 55000, value: 502",
				"id: 55000, left: 1001, right: null, value: 55000",
				"id: 1001, left: null, right: 4500, value: 1001",
				"id: 4500, left: null, right: null, value: 4500",
				"id: 204, left: 203, right: 205, value: 204",
				"id: 205, left: null, right: 207, value: 205",
				"id: 207, left: 206, right: 208, value: 207",
				"id: 208, left: null, right: null, value: 208",
				"id: 206, left: null, right: null, value: 206",
				"id: 203, left: null, right: null, value: 203",
				"id: 5, left: 2, right: 15, value: 5",
				"id: 15, left: 5-2, right: 22, value: 15",
				"id: 22, left: null, right: 57, value: 22",
				"id: 57, left: null, right: 60, value: 57",
				"id: 60, left: null, right: null, value: 60",
				"id: 5-2, left: null, right: null, value: 5",
				"id: 2, left: 1, right: 3, value: 2",
				"id: 3, left: null, right: null, value: 3",
				"id: 1, left: -51, right: 1-2, value: 1",
				"id: 1-2, left: null, right: 1-3, value: 1",
				"id: 1-3, left: null, right: 1-4, value: 1",
				"id: 1-4, left: null, right: 1-5, value: 1",
				"id: 1-5, left: null, right: null, value: 1",
				"id: -51, left: -403, right: null, value: -51",
				"id: -403, left: null, right: null, value: -403"
		};
		const auto root = 100;
		const auto tree = BST::CreateBST(root, bst_data);
		const auto expected = 5;
		const auto output = algoExpert::binarySearchTrees::findClosestValueInBst(target, tree);
		EXPECT_EQ(expected, output);
	}
	TEST(FindClosestValueInBst, Case09)
	{
		int target = 30000;
		std::vector<std::string> bst_data = {
				"id: 100, left: 5, right: 502, value: 100",
				"id: 502, left: 204, right: 55000, value: 502",
				"id: 55000, left: 1001, right: null, value: 55000",
				"id: 1001, left: null, right: 4500, value: 1001",
				"id: 4500, left: null, right: null, value: 4500",
				"id: 204, left: 203, right: 205, value: 204",
				"id: 205, left: null, right: 207, value: 205",
				"id: 207, left: 206, right: 208, value: 207",
				"id: 208, left: null, right: null, value: 208",
				"id: 206, left: null, right: null, value: 206",
				"id: 203, left: null, right: null, value: 203",
				"id: 5, left: 2, right: 15, value: 5",
				"id: 15, left: 5-2, right: 22, value: 15",
				"id: 22, left: null, right: 57, value: 22",
				"id: 57, left: null, right: 60, value: 57",
				"id: 60, left: null, right: null, value: 60",
				"id: 5-2, left: null, right: null, value: 5",
				"id: 2, left: 1, right: 3, value: 2",
				"id: 3, left: null, right: null, value: 3",
				"id: 1, left: -51, right: 1-2, value: 1",
				"id: 1-2, left: null, right: 1-3, value: 1",
				"id: 1-3, left: null, right: 1-4, value: 1",
				"id: 1-4, left: null, right: 1-5, value: 1",
				"id: 1-5, left: null, right: null, value: 1",
				"id: -51, left: -403, right: null, value: -51",
				"id: -403, left: null, right: null, value: -403"
		};
		const auto root = 100;
		const auto tree = BST::CreateBST(root, bst_data);
		const auto expected = 55000;
		const auto output = algoExpert::binarySearchTrees::findClosestValueInBst(target, tree);
		EXPECT_EQ(expected, output);
	}
	TEST(FindClosestValueInBst, Case10)
	{
		int target = -1;
		std::vector<std::string> bst_data = {
				"id: 100, left: 5, right: 502, value: 100",
				"id: 502, left: 204, right: 55000, value: 502",
				"id: 55000, left: 1001, right: null, value: 55000",
				"id: 1001, left: null, right: 4500, value: 1001",
				"id: 4500, left: null, right: null, value: 4500",
				"id: 204, left: 203, right: 205, value: 204",
				"id: 205, left: null, right: 207, value: 205",
				"id: 207, left: 206, right: 208, value: 207",
				"id: 208, left: null, right: null, value: 208",
				"id: 206, left: null, right: null, value: 206",
				"id: 203, left: null, right: null, value: 203",
				"id: 5, left: 2, right: 15, value: 5",
				"id: 15, left: 5-2, right: 22, value: 15",
				"id: 22, left: null, right: 57, value: 22",
				"id: 57, left: null, right: 60, value: 57",
				"id: 60, left: null, right: null, value: 60",
				"id: 5-2, left: null, right: null, value: 5",
				"id: 2, left: 1, right: 3, value: 2",
				"id: 3, left: null, right: null, value: 3",
				"id: 1, left: -51, right: 1-2, value: 1",
				"id: 1-2, left: null, right: 1-3, value: 1",
				"id: 1-3, left: null, right: 1-4, value: 1",
				"id: 1-4, left: null, right: 1-5, value: 1",
				"id: 1-5, left: null, right: null, value: 1",
				"id: -51, left: -403, right: null, value: -51",
				"id: -403, left: null, right: null, value: -403"
		};
		const auto root = 100;
		const auto tree = BST::CreateBST(root, bst_data);
		const auto expected = 1;
		const auto output = algoExpert::binarySearchTrees::findClosestValueInBst(target, tree);
		EXPECT_EQ(expected, output);
	}
	TEST(FindClosestValueInBst, Case11)
	{
		int target = 29751;
		std::vector<std::string> bst_data = {
				"id: 100, left: 5, right: 502, value: 100",
				"id: 502, left: 204, right: 55000, value: 502",
				"id: 55000, left: 1001, right: null, value: 55000",
				"id: 1001, left: null, right: 4500, value: 1001",
				"id: 4500, left: null, right: null, value: 4500",
				"id: 204, left: 203, right: 205, value: 204",
				"id: 205, left: null, right: 207, value: 205",
				"id: 207, left: 206, right: 208, value: 207",
				"id: 208, left: null, right: null, value: 208",
				"id: 206, left: null, right: null, value: 206",
				"id: 203, left: null, right: null, value: 203",
				"id: 5, left: 2, right: 15, value: 5",
				"id: 15, left: 5-2, right: 22, value: 15",
				"id: 22, left: null, right: 57, value: 22",
				"id: 57, left: null, right: 60, value: 57",
				"id: 60, left: null, right: null, value: 60",
				"id: 5-2, left: null, right: null, value: 5",
				"id: 2, left: 1, right: 3, value: 2",
				"id: 3, left: null, right: null, value: 3",
				"id: 1, left: -51, right: 1-2, value: 1",
				"id: 1-2, left: null, right: 1-3, value: 1",
				"id: 1-3, left: null, right: 1-4, value: 1",
				"id: 1-4, left: null, right: 1-5, value: 1",
				"id: 1-5, left: null, right: null, value: 1",
				"id: -51, left: -403, right: null, value: -51",
				"id: -403, left: null, right: null, value: -403"
		};
		const auto root = 100;
		const auto tree = BST::CreateBST(root, bst_data);
		const auto expected = 55000;
		const auto output = algoExpert::binarySearchTrees::findClosestValueInBst(target, tree);
		EXPECT_EQ(expected, output);
	}
	TEST(FindClosestValueInBst, Case12)
	{
		int target = 29749;
		std::vector<std::string> bst_data = {
				"id: 100, left: 5, right: 502, value: 100",
				"id: 502, left: 204, right: 55000, value: 502",
				"id: 55000, left: 1001, right: null, value: 55000",
				"id: 1001, left: null, right: 4500, value: 1001",
				"id: 4500, left: null, right: null, value: 4500",
				"id: 204, left: 203, right: 205, value: 204",
				"id: 205, left: null, right: 207, value: 205",
				"id: 207, left: 206, right: 208, value: 207",
				"id: 208, left: null, right: null, value: 208",
				"id: 206, left: null, right: null, value: 206",
				"id: 203, left: null, right: null, value: 203",
				"id: 5, left: 2, right: 15, value: 5",
				"id: 15, left: 5-2, right: 22, value: 15",
				"id: 22, left: null, right: 57, value: 22",
				"id: 57, left: null, right: 60, value: 57",
				"id: 60, left: null, right: null, value: 60",
				"id: 5-2, left: null, right: null, value: 5",
				"id: 2, left: 1, right: 3, value: 2",
				"id: 3, left: null, right: null, value: 3",
				"id: 1, left: -51, right: 1-2, value: 1",
				"id: 1-2, left: null, right: 1-3, value: 1",
				"id: 1-3, left: null, right: 1-4, value: 1",
				"id: 1-4, left: null, right: 1-5, value: 1",
				"id: 1-5, left: null, right: null, value: 1",
				"id: -51, left: -403, right: null, value: -51",
				"id: -403, left: null, right: null, value: -403"
		};
		const auto root = 100;
		const auto tree = BST::CreateBST(root, bst_data);
		const auto expected = 4500;
		const auto output = algoExpert::binarySearchTrees::findClosestValueInBst(target, tree);
		EXPECT_EQ(expected, output);
	}
}
