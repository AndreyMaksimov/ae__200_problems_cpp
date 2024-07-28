#include "SumBsts.h"
#include "gtest/gtest.h"

namespace
{
	// TODO: implement helper BinaryTree* CreateBinaryTree(int root, const std::vector<std::string>& bst_data);
#if 0
	using namespace algoExpert::binarySearchTrees;
	TEST(SumBsts, Case01)
	{
		std::vector<std::string> bst_data = {
				"id: 2, left: 1, right: 3, value: 2",
				"id: 1, left: null, right: null, value: 1",
				"id: 3, left: null, right: null, value: 3"
		};
		const auto root = 2;
		const auto tree = BST::CreateBST(root, bst_data);
		const auto expected = 6;
		const auto output = algoExpert::binarySearchTrees::sumBsts(tree);
		EXPECT_EQ(expected, output);
	}
	TEST(SumBsts, Case02)
	{
		std::vector<std::string> bst_data = {
				"id: 1, left: null, right: null, value: 1"
		};
		const auto root = 1;
		const auto tree = BST::CreateBST(root, bst_data);
		const auto expected = 0;
		const auto output = algoExpert::binarySearchTrees::sumBsts(tree);
		EXPECT_EQ(expected, output);
	}
	TEST(SumBsts, Case03)
	{
		std::vector<std::string> bst_data = {
				"id: 2, left: 3, right: 1, value: 2",
				"id: 1, left: null, right: null, value: 1",
				"id: 3, left: null, right: null, value: 3"
		};
		const auto root = 2;
		const auto tree = BST::CreateBST(root, bst_data);
		const auto expected = 0;
		const auto output = algoExpert::binarySearchTrees::sumBsts(tree);
		EXPECT_EQ(expected, output);
	}
	TEST(SumBsts, Case04)
	{
		std::vector<std::string> bst_data = {
				"id: 10, left: 5, right: null, value: 10",
				"id: 5, left: 1, right: null, value: 5",
				"id: 1, left: null, right: null, value: 1"
		};
		const auto root = 10;
		const auto tree = BST::CreateBST(root, bst_data);
		const auto expected = 16;
		const auto output = algoExpert::binarySearchTrees::sumBsts(tree);
		EXPECT_EQ(expected, output);
	}
	TEST(SumBsts, Case05)
	{
		std::vector<std::string> bst_data = {
				"id: 1, left: null, right: 5, value: 1",
				"id: 5, left: null, right: 10, value: 5",
				"id: 10, left: null, right: null, value: 10"
		};
		const auto root = 1;
		const auto tree = BST::CreateBST(root, bst_data);
		const auto expected = 16;
		const auto output = algoExpert::binarySearchTrees::sumBsts(tree);
		EXPECT_EQ(expected, output);
	}
	TEST(SumBsts, Case06)
	{
		std::vector<std::string> bst_data = {
				"id: 1, left: null, right: 5, value: 1",
				"id: 5, left: null, right: 10, value: 5",
				"id: 10, left: null, right: 15, value: 10",
				"id: 15, left: null, right: null, value: 15"
		};
		const auto root = 1;
		const auto tree = BST::CreateBST(root, bst_data);
		const auto expected = 31;
		const auto output = algoExpert::binarySearchTrees::sumBsts(tree);
		EXPECT_EQ(expected, output);
	}
	TEST(SumBsts, Case07)
	{
		std::vector<std::string> bst_data = {
				"id: 20, left: 7, right: 10, value: 20",
				"id: 10, left: 5, right: 15, value: 10",
				"id: 15, left: 13, right: 22, value: 15",
				"id: 22, left: null, right: null, value: 22",
				"id: 13, left: null, right: 14, value: 13",
				"id: 14, left: null, right: null, value: 14",
				"id: 7, left: 3, right: 8, value: 7",
				"id: 8, left: 7-2, right: 9, value: 8",
				"id: 9, left: null, right: null, value: 9",
				"id: 7-2, left: null, right: null, value: 7",
				"id: 3, left: null, right: null, value: 3",
				"id: 5, left: 2, right: 5-2, value: 5",
				"id: 5-2, left: null, right: null, value: 5",
				"id: 2, left: 1, right: null, value: 2",
				"id: 1, left: null, right: null, value: 1"
		};
		const auto root = 20;
		const auto tree = BST::CreateBST(root, bst_data);
		const auto expected = 121;
		const auto output = algoExpert::binarySearchTrees::sumBsts(tree);
		EXPECT_EQ(expected, output);
	}
	TEST(SumBsts, Case08)
	{
		std::vector<std::string> bst_data = {
				"id: 8, left: 2, right: null, value: 8",
				"id: 2, left: 1, right: -5, value: 2",
				"id: 1, left: null, right: null, value: 1",
				"id: -5, left: null, right: null, value: -5"
		};
		const auto root = 8;
		const auto tree = BST::CreateBST(root, bst_data);
		const auto expected = 0;
		const auto output = algoExpert::binarySearchTrees::sumBsts(tree);
		EXPECT_EQ(expected, output);
	}
	TEST(SumBsts, Case09)
	{
		std::vector<std::string> bst_data = {
				"id: 3, left: 8, right: 2, value: 3",
				"id: 8, left: 2-2, right: 9, value: 8",
				"id: 2, left: 1, right: 4, value: 2",
				"id: 2-2, left: 1-1, right: null, value: 2",
				"id: 9, left: null, right: null, value: 9",
				"id: 1, left: null, right: null, value: 1",
				"id: 4, left: null, right: null, value: 4",
				"id: 1-1, left: -1, right: null, value: 1",
				"id: -1, left: -5, right: 20, value: -1",
				"id: -5, left: null, right: null, value: -5",
				"id: 20, left: null, right: null, value: 20"
		};
		const auto root = 3;
		const auto tree = BST::CreateBST(root, bst_data);
		const auto expected = 21;
		const auto output = algoExpert::binarySearchTrees::sumBsts(tree);
		EXPECT_EQ(expected, output);
	}
	TEST(SumBsts, Case10)
	{
		std::vector<std::string> bst_data = {
				"id: 3, left: 8, right: 2, value: 3",
				"id: 8, left: 2-2, right: 9, value: 8",
				"id: 2, left: 1, right: 4, value: 2",
				"id: 2-2, left: 1-1, right: null, value: 2",
				"id: 9, left: null, right: null, value: 9",
				"id: 1, left: null, right: null, value: 1",
				"id: 4, left: null, right: null, value: 4",
				"id: 1-1, left: -1, right: null, value: 1",
				"id: -1, left: -5, right: -4, value: -1",
				"id: -5, left: null, right: null, value: -5",
				"id: -4, left: null, right: null, value: -4"
		};
		const auto root = 3;
		const auto tree = BST::CreateBST(root, bst_data);
		const auto expected = 7;
		const auto output = algoExpert::binarySearchTrees::sumBsts(tree);
		EXPECT_EQ(expected, output);
	}
	TEST(SumBsts, Case11)
	{
		std::vector<std::string> bst_data = {
				"id: 3, left: 8, right: 2, value: 3",
				"id: 8, left: 2-2, right: 9, value: 8",
				"id: 2, left: 1, right: 4, value: 2",
				"id: 2-2, left: 15, right: null, value: 2",
				"id: 9, left: null, right: null, value: 9",
				"id: 1, left: null, right: null, value: 1",
				"id: 4, left: null, right: null, value: 4",
				"id: 15, left: 18, right: null, value: 15",
				"id: 18, left: 16, right: 20, value: 18",
				"id: 16, left: null, right: null, value: 16",
				"id: 20, left: null, right: null, value: 20"
		};
		const auto root = 3;
		const auto tree = BST::CreateBST(root, bst_data);
		const auto expected = 61;
		const auto output = algoExpert::binarySearchTrees::sumBsts(tree);
		EXPECT_EQ(expected, output);
	}
	TEST(SumBsts, Case12)
	{
		std::vector<std::string> bst_data = {
				"id: 3, left: 8, right: 2, value: 3",
				"id: 8, left: 2-2, right: 9, value: 8",
				"id: 2, left: 1, right: 4, value: 2",
				"id: 2-2, left: -2, right: 30, value: 2",
				"id: 9, left: null, right: null, value: 9",
				"id: 1, left: null, right: null, value: 1",
				"id: 4, left: null, right: null, value: 4",
				"id: -2, left: 18, right: null, value: -2",
				"id: 18, left: 16, right: 20, value: 18",
				"id: 16, left: null, right: null, value: 16",
				"id: 20, left: null, right: null, value: 20",
				"id: 30, left: null, right: null, value: 30"
		};
		const auto root = 3;
		const auto tree = BST::CreateBST(root, bst_data);
		const auto expected = 61;
		const auto output = algoExpert::binarySearchTrees::sumBsts(tree);
		EXPECT_EQ(expected, output);
	}
	TEST(SumBsts, Case13)
	{
		std::vector<std::string> bst_data = {
				"id: 3, left: 8, right: 2, value: 3",
				"id: 8, left: 2-2, right: null, value: 8",
				"id: 2, left: 1, right: 4, value: 2",
				"id: 2-2, left: -2, right: 30, value: 2",
				"id: 1, left: null, right: null, value: 1",
				"id: 4, left: null, right: null, value: 4",
				"id: -2, left: 18, right: null, value: -2",
				"id: 18, left: 16, right: 20, value: 18",
				"id: 16, left: null, right: null, value: 16",
				"id: 20, left: null, right: null, value: 20",
				"id: 30, left: null, right: null, value: 30"
		};
		const auto root = 3;
		const auto tree = BST::CreateBST(root, bst_data);
		const auto expected = 61;
		const auto output = algoExpert::binarySearchTrees::sumBsts(tree);
		EXPECT_EQ(expected, output);
	}
	TEST(SumBsts, Case14)
	{
		std::vector<std::string> bst_data = {
				"id: 3, left: 8, right: 2, value: 3",
				"id: 8, left: 2-2, right: 7, value: 8",
				"id: 2, left: 1, right: 4, value: 2",
				"id: 2-2, left: -2, right: 30, value: 2",
				"id: 7, left: null, right: null, value: 7",
				"id: 1, left: null, right: null, value: 1",
				"id: 4, left: null, right: null, value: 4",
				"id: -2, left: 18, right: null, value: -2",
				"id: 18, left: 16, right: 20, value: 18",
				"id: 16, left: null, right: null, value: 16",
				"id: 20, left: null, right: null, value: 20",
				"id: 30, left: null, right: null, value: 30"
		};
		const auto root = 3;
		const auto tree = BST::CreateBST(root, bst_data);
		const auto expected = 61;
		const auto output = algoExpert::binarySearchTrees::sumBsts(tree);
		EXPECT_EQ(expected, output);
	}
	TEST(SumBsts, Case15)
	{
		std::vector<std::string> bst_data = {
				"id: 8, left: 2, right: 9, value: 8",
				"id: 2, left: 1, right: 10, value: 2",
				"id: 1, left: null, right: null, value: 1",
				"id: 10, left: null, right: null, value: 10",
				"id: 9, left: null, right: null, value: 9"
		};
		const auto root = 8;
		const auto tree = BST::CreateBST(root, bst_data);
		const auto expected = 13;
		const auto output = algoExpert::binarySearchTrees::sumBsts(tree);
		EXPECT_EQ(expected, output);
	}
	TEST(SumBsts, Case16)
	{
		std::vector<std::string> bst_data = {
				"id: 8, left: 2, right: 9, value: 8",
				"id: 2, left: 1, right: -5, value: 2",
				"id: 1, left: null, right: null, value: 1",
				"id: -5, left: null, right: null, value: -5",
				"id: 9, left: null, right: 12, value: 9",
				"id: 12, left: null, right: null, value: 12"
		};
		const auto root = 8;
		const auto tree = BST::CreateBST(root, bst_data);
		const auto expected = 0;
		const auto output = algoExpert::binarySearchTrees::sumBsts(tree);
		EXPECT_EQ(expected, output);
	}
	TEST(SumBsts, Case17)
	{
		std::vector<std::string> bst_data = {
				"id: 1, left: -7, right: 10, value: 1",
				"id: 10, left: 5, right: 15, value: 10",
				"id: 15, left: 13, right: 22, value: 15",
				"id: 22, left: null, right: null, value: 22",
				"id: 13, left: null, right: 14, value: 13",
				"id: 14, left: null, right: null, value: 14",
				"id: -7, left: -8, right: 0, value: -7",
				"id: -8, left: -9, right: null, value: -8",
				"id: -9, left: null, right: null, value: -9",
				"id: 0, left: -7-2, right: 0-2, value: 0",
				"id: -7-2, left: null, right: null, value: -7",
				"id: 0-2, left: null, right: null, value: 0",
				"id: 5, left: 2, right: 5-2, value: 5",
				"id: 5-2, left: null, right: null, value: 5",
				"id: 2, left: 1-2, right: null, value: 2",
				"id: 1-2, left: null, right: null, value: 1"
		};
		const auto root = 1;
		const auto tree = BST::CreateBST(root, bst_data);
		const auto expected = 57;
		const auto output = algoExpert::binarySearchTrees::sumBsts(tree);
		EXPECT_EQ(expected, output);
	}
	TEST(SumBsts, Case18)
	{
		std::vector<std::string> bst_data = {
				"id: 1, left: -7, right: 10, value: 1",
				"id: 10, left: 5, right: 15, value: 10",
				"id: 15, left: 13, right: 22, value: 15",
				"id: 22, left: null, right: null, value: 22",
				"id: 13, left: null, right: 14, value: 13",
				"id: 14, left: null, right: null, value: 14",
				"id: -7, left: -8, right: 0, value: -7",
				"id: -8, left: -9, right: null, value: -8",
				"id: -9, left: null, right: null, value: -9",
				"id: 0, left: -7-2, right: 0-2, value: 0",
				"id: -7-2, left: null, right: null, value: -7",
				"id: 0-2, left: null, right: null, value: 0",
				"id: 5, left: 6, right: 5-2, value: 5",
				"id: 5-2, left: null, right: null, value: 5",
				"id: 6, left: 1-2, right: null, value: 6",
				"id: 1-2, left: null, right: null, value: 1"
		};
		const auto root = 1;
		const auto tree = BST::CreateBST(root, bst_data);
		const auto expected = 33;
		const auto output = algoExpert::binarySearchTrees::sumBsts(tree);
		EXPECT_EQ(expected, output);
	}
	TEST(SumBsts, Case19)
	{
		std::vector<std::string> bst_data = {
				"id: 1, left: 3, right: 10, value: 1",
				"id: 10, left: 5, right: 15, value: 10",
				"id: 15, left: 13, right: 22, value: 15",
				"id: 22, left: null, right: null, value: 22",
				"id: 13, left: null, right: 14, value: 13",
				"id: 14, left: null, right: null, value: 14",
				"id: 3, left: -8, right: 0, value: 3",
				"id: -8, left: -9, right: null, value: -8",
				"id: -9, left: null, right: null, value: -9",
				"id: 0, left: -7, right: 0-2, value: 0",
				"id: -7, left: null, right: null, value: -7",
				"id: 0-2, left: null, right: null, value: 0",
				"id: 5, left: 6, right: 5-2, value: 5",
				"id: 5-2, left: null, right: null, value: 5",
				"id: 6, left: 1-2, right: null, value: 6",
				"id: 1-2, left: null, right: null, value: 1"
		};
		const auto root = 1;
		const auto tree = BST::CreateBST(root, bst_data);
		const auto expected = 57;
		const auto output = algoExpert::binarySearchTrees::sumBsts(tree);
		EXPECT_EQ(expected, output);
	}
	TEST(SumBsts, Case20)
	{
		std::vector<std::string> bst_data = {
				"id: 1, left: 3, right: 10, value: 1",
				"id: 10, left: 5, right: 23, value: 10",
				"id: 23, left: 13, right: 22, value: 23",
				"id: 22, left: null, right: null, value: 22",
				"id: 13, left: null, right: 14, value: 13",
				"id: 14, left: null, right: null, value: 14",
				"id: 3, left: -8, right: 0, value: 3",
				"id: -8, left: -9, right: null, value: -8",
				"id: -9, left: null, right: null, value: -9",
				"id: 0, left: -7, right: 0-2, value: 0",
				"id: -7, left: null, right: null, value: -7",
				"id: 0-2, left: null, right: null, value: 0",
				"id: 5, left: 6, right: 5-2, value: 5",
				"id: 5-2, left: null, right: null, value: 5",
				"id: 6, left: 1-2, right: null, value: 6",
				"id: 1-2, left: null, right: null, value: 1"
		};
		const auto root = 1;
		const auto tree = BST::CreateBST(root, bst_data);
		const auto expected = -7;
		const auto output = algoExpert::binarySearchTrees::sumBsts(tree);
		EXPECT_EQ(expected, output);
	}
	TEST(SumBsts, Case21)
	{
		std::vector<std::string> bst_data = {
				"id: 1, left: 3, right: 10, value: 1",
				"id: 10, left: 5, right: 23, value: 10",
				"id: 23, left: 13, right: 22, value: 23",
				"id: 22, left: null, right: null, value: 22",
				"id: 13, left: null, right: 14, value: 13",
				"id: 14, left: null, right: null, value: 14",
				"id: 3, left: -8, right: 0, value: 3",
				"id: -8, left: -9, right: null, value: -8",
				"id: -9, left: null, right: null, value: -9",
				"id: 0, left: -7, right: -5, value: 0",
				"id: -7, left: null, right: null, value: -7",
				"id: -5, left: null, right: null, value: -5",
				"id: 5, left: 6, right: 5-2, value: 5",
				"id: 5-2, left: null, right: null, value: 5",
				"id: 6, left: 1-2, right: null, value: 6",
				"id: 1-2, left: null, right: null, value: 1"
		};
		const auto root = 1;
		const auto tree = BST::CreateBST(root, bst_data);
		const auto expected = 0;
		const auto output = algoExpert::binarySearchTrees::sumBsts(tree);
		EXPECT_EQ(expected, output);
	}
	TEST(SumBsts, Case22)
	{
		std::vector<std::string> bst_data = {
				"id: 1, left: 3, right: 10, value: 1",
				"id: 10, left: 5, right: 23, value: 10",
				"id: 23, left: 19, right: 22, value: 23",
				"id: 22, left: null, right: null, value: 22",
				"id: 19, left: null, right: 14, value: 19",
				"id: 14, left: null, right: null, value: 14",
				"id: 3, left: -8, right: 0, value: 3",
				"id: -8, left: -3, right: null, value: -8",
				"id: -3, left: null, right: null, value: -3",
				"id: 0, left: -7, right: -5, value: 0",
				"id: -7, left: null, right: null, value: -7",
				"id: -5, left: null, right: null, value: -5",
				"id: 5, left: 6, right: 5-2, value: 5",
				"id: 5-2, left: null, right: null, value: 5",
				"id: 6, left: 99, right: null, value: 6",
				"id: 99, left: null, right: null, value: 99"
		};
		const auto root = 1;
		const auto tree = BST::CreateBST(root, bst_data);
		const auto expected = 0;
		const auto output = algoExpert::binarySearchTrees::sumBsts(tree);
		EXPECT_EQ(expected, output);
	}
	TEST(SumBsts, Case23)
	{
		std::vector<std::string> bst_data = {
				"id: 100, left: 1, right: null, value: 100",
				"id: 1, left: -7, right: 10, value: 1",
				"id: 10, left: 5, right: 15, value: 10",
				"id: 15, left: 13, right: 22, value: 15",
				"id: 22, left: null, right: null, value: 22",
				"id: 13, left: null, right: 14, value: 13",
				"id: 14, left: null, right: null, value: 14",
				"id: -7, left: -8, right: 0, value: -7",
				"id: -8, left: -9, right: null, value: -8",
				"id: -9, left: null, right: null, value: -9",
				"id: 0, left: -7-2, right: 0-2, value: 0",
				"id: -7-2, left: null, right: null, value: -7",
				"id: 0-2, left: null, right: null, value: 0",
				"id: 5, left: 2, right: 5-2, value: 5",
				"id: 5-2, left: null, right: null, value: 5",
				"id: 2, left: 1-2, right: null, value: 2",
				"id: 1-2, left: null, right: null, value: 1"
		};
		const auto root = 100;
		const auto tree = BST::CreateBST(root, bst_data);
		const auto expected = 157;
		const auto output = algoExpert::binarySearchTrees::sumBsts(tree);
		EXPECT_EQ(expected, output);
	}
	TEST(SumBsts, Case24)
	{
		std::vector<std::string> bst_data = {
				"id: -100, left: 1, right: null, value: -100",
				"id: 1, left: -7, right: 10, value: 1",
				"id: 10, left: 5, right: 15, value: 10",
				"id: 15, left: 13, right: 22, value: 15",
				"id: 22, left: null, right: null, value: 22",
				"id: 13, left: null, right: 14, value: 13",
				"id: 14, left: null, right: null, value: 14",
				"id: -7, left: -8, right: 0, value: -7",
				"id: -8, left: -9, right: null, value: -8",
				"id: -9, left: null, right: null, value: -9",
				"id: 0, left: -7-2, right: 0-2, value: 0",
				"id: -7-2, left: null, right: null, value: -7",
				"id: 0-2, left: null, right: null, value: 0",
				"id: 5, left: 2, right: 5-2, value: 5",
				"id: 5-2, left: null, right: null, value: 5",
				"id: 2, left: 1-2, right: null, value: 2",
				"id: 1-2, left: null, right: null, value: 1"
		};
		const auto root = -100;
		const auto tree = BST::CreateBST(root, bst_data);
		const auto expected = 57;
		const auto output = algoExpert::binarySearchTrees::sumBsts(tree);
		EXPECT_EQ(expected, output);
	}
	TEST(SumBsts, Case25)
	{
		std::vector<std::string> bst_data = {
				"id: -100, left: null, right: 1, value: -100",
				"id: 1, left: -7, right: 10, value: 1",
				"id: 10, left: 5, right: 15, value: 10",
				"id: 15, left: 13, right: 22, value: 15",
				"id: 22, left: null, right: null, value: 22",
				"id: 13, left: null, right: 14, value: 13",
				"id: 14, left: null, right: null, value: 14",
				"id: -7, left: -8, right: 0, value: -7",
				"id: -8, left: -9, right: null, value: -8",
				"id: -9, left: null, right: null, value: -9",
				"id: 0, left: -7-2, right: 0-2, value: 0",
				"id: -7-2, left: null, right: null, value: -7",
				"id: 0-2, left: null, right: null, value: 0",
				"id: 5, left: 2, right: 5-2, value: 5",
				"id: 5-2, left: null, right: null, value: 5",
				"id: 2, left: 1-2, right: null, value: 2",
				"id: 1-2, left: null, right: null, value: 1"
		};
		const auto root = -100;
		const auto tree = BST::CreateBST(root, bst_data);
		const auto expected = -43;
		const auto output = algoExpert::binarySearchTrees::sumBsts(tree);
		EXPECT_EQ(expected, output);
	}
	TEST(SumBsts, Case26)
	{
		std::vector<std::string> bst_data = {
				"id: -100, left: null, right: -99, value: -100",
				"id: -99, left: null, right: -98, value: -99",
				"id: -98, left: null, right: -97, value: -98",
				"id: -97, left: null, right: 1, value: -97",
				"id: 1, left: -7, right: 10, value: 1",
				"id: 10, left: 5, right: 15, value: 10",
				"id: 15, left: 13, right: 22, value: 15",
				"id: 22, left: null, right: null, value: 22",
				"id: 13, left: null, right: 14, value: 13",
				"id: 14, left: null, right: null, value: 14",
				"id: -7, left: -8, right: 0, value: -7",
				"id: -8, left: -9, right: null, value: -8",
				"id: -9, left: null, right: null, value: -9",
				"id: 0, left: -7-2, right: 0-2, value: 0",
				"id: -7-2, left: null, right: null, value: -7",
				"id: 0-2, left: null, right: null, value: 0",
				"id: 5, left: 2, right: 5-2, value: 5",
				"id: 5-2, left: null, right: null, value: 5",
				"id: 2, left: 1-2, right: null, value: 2",
				"id: 1-2, left: null, right: null, value: 1"
		};
		const auto root = -100;
		const auto tree = BST::CreateBST(root, bst_data);
		const auto expected = -337;
		const auto output = algoExpert::binarySearchTrees::sumBsts(tree);
		EXPECT_EQ(expected, output);
	}
	TEST(SumBsts, Case27)
	{
		std::vector<std::string> bst_data = {
				"id: -100, left: null, right: -99, value: -100",
				"id: -99, left: null, right: -98, value: -99",
				"id: -98, left: null, right: -97, value: -98",
				"id: -97, left: null, right: -98-2, value: -97",
				"id: -98-2, left: -7, right: 10, value: -98",
				"id: 10, left: 5, right: 15, value: 10",
				"id: 15, left: 13, right: 22, value: 15",
				"id: 22, left: null, right: null, value: 22",
				"id: 13, left: null, right: 14, value: 13",
				"id: 14, left: null, right: null, value: 14",
				"id: -7, left: -8, right: 0, value: -7",
				"id: -8, left: -9, right: null, value: -8",
				"id: -9, left: null, right: null, value: -9",
				"id: 0, left: -7-2, right: 0-2, value: 0",
				"id: -7-2, left: null, right: null, value: -7",
				"id: 0-2, left: null, right: null, value: 0",
				"id: 5, left: 2, right: 5-2, value: 5",
				"id: 5-2, left: null, right: null, value: 5",
				"id: 2, left: 1-2, right: null, value: 2",
				"id: 1-2, left: null, right: null, value: 1"
		};
		const auto root = -100;
		const auto tree = BST::CreateBST(root, bst_data);
		const auto expected = 56;
		const auto output = algoExpert::binarySearchTrees::sumBsts(tree);
		EXPECT_EQ(expected, output);
	}
	TEST(SumBsts, Case28)
	{
		std::vector<std::string> bst_data = {
				"id: -100, left: null, right: -99, value: -100",
				"id: -99, left: null, right: -98, value: -99",
				"id: -98, left: null, right: -97, value: -98",
				"id: -97, left: null, right: 1, value: -97",
				"id: 1, left: -7, right: 10, value: 1",
				"id: 10, left: 5, right: 15, value: 10",
				"id: 15, left: 13, right: 22, value: 15",
				"id: 22, left: null, right: null, value: 22",
				"id: 13, left: null, right: 12, value: 13",
				"id: 12, left: null, right: null, value: 12",
				"id: -7, left: -8, right: 0, value: -7",
				"id: -8, left: -9, right: null, value: -8",
				"id: -9, left: null, right: null, value: -9",
				"id: 0, left: -7-2, right: 0-2, value: 0",
				"id: -7-2, left: null, right: null, value: -7",
				"id: 0-2, left: null, right: null, value: 0",
				"id: 5, left: 2, right: 5-2, value: 5",
				"id: 5-2, left: null, right: null, value: 5",
				"id: 2, left: 1-2, right: null, value: 2",
				"id: 1-2, left: null, right: null, value: 1"
		};
		const auto root = -100;
		const auto tree = BST::CreateBST(root, bst_data);
		const auto expected = -18;
		const auto output = algoExpert::binarySearchTrees::sumBsts(tree);
		EXPECT_EQ(expected, output);
	}
	TEST(SumBsts, Case29)
	{
		std::vector<std::string> bst_data = {
				"id: -100, left: null, right: -99, value: -100",
				"id: -99, left: null, right: -98, value: -99",
				"id: -98, left: null, right: -97, value: -98",
				"id: -97, left: null, right: 1, value: -97",
				"id: 1, left: -7, right: 10, value: 1",
				"id: 10, left: 5, right: 15, value: 10",
				"id: 15, left: 13, right: 22, value: 15",
				"id: 22, left: null, right: null, value: 22",
				"id: 13, left: null, right: 12, value: 13",
				"id: 12, left: null, right: null, value: 12",
				"id: -7, left: -8, right: 0, value: -7",
				"id: -8, left: -9, right: null, value: -8",
				"id: -9, left: null, right: null, value: -9",
				"id: 0, left: -7-2, right: 0-2, value: 0",
				"id: -7-2, left: null, right: null, value: -7",
				"id: 0-2, left: null, right: null, value: 0",
				"id: 5, left: 2, right: 5-2, value: 5",
				"id: 5-2, left: null, right: null, value: 5",
				"id: 2, left: 1-2, right: null, value: 2",
				"id: 1-2, left: null, right: 1-3, value: 1",
				"id: 1-3, left: null, right: 1-4, value: 1",
				"id: 1-4, left: null, right: 1-5, value: 1",
				"id: 1-5, left: null, right: null, value: 1"
		};
		const auto root = -100;
		const auto tree = BST::CreateBST(root, bst_data);
		const auto expected = -15;
		const auto output = algoExpert::binarySearchTrees::sumBsts(tree);
		EXPECT_EQ(expected, output);
	}
	TEST(SumBsts, Case30)
	{
		std::vector<std::string> bst_data = {
				"id: -100, left: null, right: -99, value: -100",
				"id: -99, left: null, right: -98, value: -99",
				"id: -98, left: null, right: -97, value: -98",
				"id: -97, left: null, right: 1, value: -97",
				"id: 1, left: -7, right: 10, value: 1",
				"id: 10, left: 5, right: 15, value: 10",
				"id: 15, left: 13, right: 22, value: 15",
				"id: 22, left: null, right: null, value: 22",
				"id: 13, left: null, right: 12, value: 13",
				"id: 12, left: null, right: null, value: 12",
				"id: -7, left: -8, right: 0, value: -7",
				"id: -8, left: -9, right: null, value: -8",
				"id: -9, left: null, right: null, value: -9",
				"id: 0, left: -7-2, right: 0-2, value: 0",
				"id: -7-2, left: null, right: null, value: -7",
				"id: 0-2, left: null, right: null, value: 0",
				"id: 5, left: 2, right: 5-2, value: 5",
				"id: 5-2, left: null, right: null, value: 5",
				"id: 2, left: 1-2, right: null, value: 2",
				"id: 1-2, left: null, right: 1-3, value: 1",
				"id: 1-3, left: null, right: 1-4, value: 1",
				"id: 1-4, left: 1-5, right: null, value: 1",
				"id: 1-5, left: null, right: null, value: 1"
		};
		const auto root = -100;
		const auto tree = BST::CreateBST(root, bst_data);
		const auto expected = -31;
		const auto output = algoExpert::binarySearchTrees::sumBsts(tree);
		EXPECT_EQ(expected, output);
	}
	TEST(SumBsts, Case31)
	{
		std::vector<std::string> bst_data = {
				"id: 20, left: 7, right: 10, value: 20",
				"id: 7, left: 0, right: 8, value: 7",
				"id: 0, left: null, right: null, value: 0",
				"id: 8, left: 7-2, right: 9, value: 8",
				"id: 7-2, left: null, right: null, value: 7",
				"id: 9, left: null, right: null, value: 9",
				"id: 10, left: 5, right: 15, value: 10",
				"id: 5, left: 2, right: 5-2, value: 5",
				"id: 2, left: 1, right: null, value: 2",
				"id: 1, left: null, right: null, value: 1",
				"id: 5-2, left: null, right: null, value: 5",
				"id: 15, left: 13, right: 22, value: 15",
				"id: 13, left: null, right: 14, value: 13",
				"id: 14, left: null, right: null, value: 14",
				"id: 22, left: null, right: null, value: 22"
		};
		const auto root = 20;
		const auto tree = BST::CreateBST(root, bst_data);
		const auto expected = 118;
		const auto output = algoExpert::binarySearchTrees::sumBsts(tree);
		EXPECT_EQ(expected, output);
	}
	TEST(SumBsts, Case32)
	{
		std::vector<std::string> bst_data = {
				"id: 20, left: 9, right: 10, value: 20",
				"id: 9, left: 0, right: 8, value: 9",
				"id: 0, left: null, right: null, value: 0",
				"id: 8, left: 7-2, right: null, value: 8",
				"id: 7-2, left: null, right: null, value: 7",
				"id: 10, left: 6, right: 15, value: 10",
				"id: 6, left: 2, right: 5, value: 6",
				"id: 2, left: 1, right: null, value: 2",
				"id: 1, left: null, right: null, value: 1",
				"id: 5, left: null, right: null, value: 5",
				"id: 15, left: 17, right: 22, value: 15",
				"id: 17, left: null, right: 14, value: 17",
				"id: 14, left: null, right: null, value: 14",
				"id: 22, left: null, right: null, value: 22"
		};
		const auto root = 20;
		const auto tree = BST::CreateBST(root, bst_data);
		const auto expected = 0;
		const auto output = algoExpert::binarySearchTrees::sumBsts(tree);
		EXPECT_EQ(expected, output);
	}
	TEST(SumBsts, Case33)
	{
		std::vector<std::string> bst_data = {
				"id: 20, left: 7, right: 10, value: 20",
				"id: 7, left: 2, right: 8, value: 7",
				"id: 2, left: null, right: null, value: 2",
				"id: 8, left: 7-2, right: 9, value: 8",
				"id: 7-2, left: null, right: null, value: 7",
				"id: 9, left: null, right: null, value: 9",
				"id: 10, left: 5, right: 15, value: 10",
				"id: 5, left: 2-2, right: 5-2, value: 5",
				"id: 2-2, left: null, right: null, value: 2",
				"id: 5-2, left: null, right: null, value: 5",
				"id: 15, left: 13, right: 8-2, value: 15",
				"id: 13, left: null, right: 14, value: 13",
				"id: 14, left: null, right: null, value: 14",
				"id: 8-2, left: null, right: null, value: 8"
		};
		const auto root = 20;
		const auto tree = BST::CreateBST(root, bst_data);
		const auto expected = 45;
		const auto output = algoExpert::binarySearchTrees::sumBsts(tree);
		EXPECT_EQ(expected, output);
	}
#endif
}
