#include "ValidateThreeNodes.h"
#include "gtest/gtest.h"

namespace
{
	/*
	TEST(ValidateThreeNodes, Case01)
	{
		BST* nodeOne = "5";
		BST* nodeThree = "3";
		BST* nodeTwo = "2";
		std::vector<std::string> bst_data = {
				"id: 0, left: null, right: null, value: 0",
				"id: 1, left: 0, right: null, value: 1",
				"id: 2, left: 1, right: 4, value: 2",
				"id: 3, left: null, right: null, value: 3",
				"id: 4, left: 3, right: null, value: 4",
				"id: 5, left: 2, right: 7, value: 5",
				"id: 6, left: null, right: null, value: 6",
				"id: 7, left: 6, right: 8, value: 7",
				"id: 8, left: null, right: null, value: 8"
		};
		const auto root = 5;
		// const auto tree = BST::CreateBST(root, bst_data);
		const auto expected = true;
		const auto output = algoExpert::binarySearchTrees::validateThreeNodes(nodeOne, nodeThree, nodeTwo); // , tree);
		EXPECT_EQ(expected, output);
	}
	TEST(ValidateThreeNodes, Case02)
	{
		BST* nodeOne = "5";
		BST* nodeThree = "1";
		BST* nodeTwo = "8";
		std::vector<std::string> bst_data = {
				"id: 0, left: null, right: null, value: 0",
				"id: 1, left: 0, right: null, value: 1",
				"id: 2, left: 1, right: null, value: 2",
				"id: 3, left: 2, right: 4, value: 3",
				"id: 4, left: null, right: null, value: 4",
				"id: 5, left: 3, right: 7, value: 5",
				"id: 6, left: null, right: null, value: 6",
				"id: 7, left: 6, right: 8, value: 7",
				"id: 8, left: null, right: null, value: 8"
		};
		const auto root = 5;
		// const auto tree = BST::CreateBST(root, bst_data);
		const auto expected = false;
		const auto output = algoExpert::binarySearchTrees::validateThreeNodes(nodeOne, nodeThree, nodeTwo); // , tree);
		EXPECT_EQ(expected, output);
	}
	TEST(ValidateThreeNodes, Case03)
	{
		BST* nodeOne = "8";
		BST* nodeThree = "2";
		BST* nodeTwo = "5";
		std::vector<std::string> bst_data = {
				"id: 0, left: null, right: null, value: 0",
				"id: 1, left: 0, right: null, value: 1",
				"id: 2, left: 1, right: null, value: 2",
				"id: 3, left: 2, right: 4, value: 3",
				"id: 4, left: null, right: null, value: 4",
				"id: 5, left: 3, right: 7, value: 5",
				"id: 6, left: null, right: null, value: 6",
				"id: 7, left: 6, right: 8, value: 7",
				"id: 8, left: null, right: null, value: 8"
		};
		const auto root = 5;
		// const auto tree = BST::CreateBST(root, bst_data);
		const auto expected = false;
		const auto output = algoExpert::binarySearchTrees::validateThreeNodes(nodeOne, nodeThree, nodeTwo); // , tree);
		EXPECT_EQ(expected, output);
	}
	TEST(ValidateThreeNodes, Case04)
	{
		BST* nodeOne = "2";
		BST* nodeThree = "8";
		BST* nodeTwo = "5";
		std::vector<std::string> bst_data = {
				"id: 1, left: null, right: null, value: 1",
				"id: 2, left: 1, right: 3, value: 2",
				"id: 3, left: null, right: 4, value: 3",
				"id: 4, left: null, right: 5, value: 4",
				"id: 5, left: null, right: 6, value: 5",
				"id: 6, left: null, right: 7, value: 6",
				"id: 7, left: null, right: 8, value: 7",
				"id: 8, left: null, right: 9, value: 8",
				"id: 9, left: null, right: null, value: 9"
		};
		const auto root = 2;
		// const auto tree = BST::CreateBST(root, bst_data);
		const auto expected = true;
		const auto output = algoExpert::binarySearchTrees::validateThreeNodes(nodeOne, nodeThree, nodeTwo); // , tree);
		EXPECT_EQ(expected, output);
	}
	TEST(ValidateThreeNodes, Case05)
	{
		BST* nodeOne = "4";
		BST* nodeThree = "2";
		BST* nodeTwo = "1";
		std::vector<std::string> bst_data = {
				"id: 1, left: null, right: 2, value: 1",
				"id: 2, left: null, right: null, value: 2",
				"id: 3, left: 1, right: null, value: 3",
				"id: 4, left: 3, right: null, value: 4",
				"id: 5, left: null, right: 5, value: 5",
				"id: 6, left: 4, right: 8, value: 6",
				"id: 7, left: null, right: null, value: 7",
				"id: 8, left: 7, right: 9, value: 8",
				"id: 9, left: null, right: null, value: 9"
		};
		const auto root = 6;
		// const auto tree = BST::CreateBST(root, bst_data);
		const auto expected = true;
		const auto output = algoExpert::binarySearchTrees::validateThreeNodes(nodeOne, nodeThree, nodeTwo); // , tree);
		EXPECT_EQ(expected, output);
	}
	TEST(ValidateThreeNodes, Case06)
	{
		BST* nodeOne = "1";
		BST* nodeThree = "3";
		BST* nodeTwo = "2";
		std::vector<std::string> bst_data = {
				"id: 1, left: null, right: null, value: 1",
				"id: 2, left: 1, right: 3, value: 2",
				"id: 3, left: null, right: 4, value: 3",
				"id: 4, left: null, right: null, value: 4"
		};
		const auto root = 2;
		// const auto tree = BST::CreateBST(root, bst_data);
		const auto expected = false;
		const auto output = algoExpert::binarySearchTrees::validateThreeNodes(nodeOne, nodeThree, nodeTwo); // , tree);
		EXPECT_EQ(expected, output);
	}
	TEST(ValidateThreeNodes, Case07)
	{
		BST* nodeOne = "2";
		BST* nodeThree = "13";
		BST* nodeTwo = "4";
		std::vector<std::string> bst_data = {
				"id: 1, left: null, right: null, value: 1",
				"id: 2, left: 1, right: null, value: 2",
				"id: 3, left: 2, right: null, value: 3",
				"id: 4, left: 3, right: 5, value: 4",
				"id: 5, left: null, right: 7, value: 5",
				"id: 6, left: null, right: null, value: 6",
				"id: 7, left: 6, right: null, value: 7",
				"id: 8, left: 4, right: 10, value: 8",
				"id: 9, left: null, right: null, value: 9",
				"id: 10, left: 9, right: 14, value: 10",
				"id: 11, left: null, right: null, value: 11",
				"id: 12, left: 11, right: 13, value: 12",
				"id: 13, left: null, right: null, value: 13",
				"id: 14, left: 12, right: null, value: 14"
		};
		const auto root = 8;
		// const auto tree = BST::CreateBST(root, bst_data);
		const auto expected = false;
		const auto output = algoExpert::binarySearchTrees::validateThreeNodes(nodeOne, nodeThree, nodeTwo); // , tree);
		EXPECT_EQ(expected, output);
	}
	TEST(ValidateThreeNodes, Case08)
	{
		BST* nodeOne = "8";
		BST* nodeThree = "1";
		BST* nodeTwo = "7";
		std::vector<std::string> bst_data = {
				"id: 1, left: null, right: null, value: 1",
				"id: 2, left: 1, right: null, value: 2",
				"id: 3, left: 2, right: null, value: 3",
				"id: 4, left: 3, right: null, value: 4",
				"id: 5, left: 4, right: null, value: 5",
				"id: 6, left: 5, right: null, value: 6",
				"id: 7, left: 6, right: null, value: 7",
				"id: 8, left: 7, right: 9, value: 8",
				"id: 9, left: null, right: null, value: 9"
		};
		const auto root = 8;
		// const auto tree = BST::CreateBST(root, bst_data);
		const auto expected = true;
		const auto output = algoExpert::binarySearchTrees::validateThreeNodes(nodeOne, nodeThree, nodeTwo); // , tree);
		EXPECT_EQ(expected, output);
	}
	TEST(ValidateThreeNodes, Case09)
	{
		BST* nodeOne = "2";
		BST* nodeThree = "3";
		BST* nodeTwo = "1";
		std::vector<std::string> bst_data = {
				"id: 1, left: null, right: null, value: 1",
				"id: 2, left: 1, right: null, value: 2",
				"id: 3, left: 2, right: null, value: 3"
		};
		const auto root = 3;
		// const auto tree = BST::CreateBST(root, bst_data);
		const auto expected = false;
		const auto output = algoExpert::binarySearchTrees::validateThreeNodes(nodeOne, nodeThree, nodeTwo); // , tree);
		EXPECT_EQ(expected, output);
	}
	TEST(ValidateThreeNodes, Case10)
	{
		BST* nodeOne = "1";
		BST* nodeThree = "3";
		BST* nodeTwo = "2";
		std::vector<std::string> bst_data = {
				"id: 1, left: null, right: null, value: 1",
				"id: 2, left: 1, right: null, value: 2",
				"id: 3, left: 2, right: null, value: 3"
		};
		const auto root = 3;
		// const auto tree = BST::CreateBST(root, bst_data);
		const auto expected = true;
		const auto output = algoExpert::binarySearchTrees::validateThreeNodes(nodeOne, nodeThree, nodeTwo); // , tree);
		EXPECT_EQ(expected, output);
	}
	TEST(ValidateThreeNodes, Case11)
	{
		BST* nodeOne = "9";
		BST* nodeThree = "6";
		BST* nodeTwo = "8";
		std::vector<std::string> bst_data = {
				"id: 1, left: null, right: null, value: 1",
				"id: 2, left: 1, right: 3, value: 2",
				"id: 3, left: null, right: null, value: 3",
				"id: 4, left: 2, right: 5, value: 4",
				"id: 5, left: null, right: null, value: 5",
				"id: 6, left: 4, right: 8, value: 6",
				"id: 7, left: null, right: null, value: 7",
				"id: 8, left: 7, right: 9, value: 8",
				"id: 9, left: null, right: null, value: 9"
		};
		const auto root = 6;
		// const auto tree = BST::CreateBST(root, bst_data);
		const auto expected = true;
		const auto output = algoExpert::binarySearchTrees::validateThreeNodes(nodeOne, nodeThree, nodeTwo); // , tree);
		EXPECT_EQ(expected, output);
	}
	TEST(ValidateThreeNodes, Case12)
	{
		BST* nodeOne = "12";
		BST* nodeThree = "15";
		BST* nodeTwo = "13";
		std::vector<std::string> bst_data = {
				"id: 1, left: null, right: 2, value: 1",
				"id: 2, left: null, right: null, value: 2",
				"id: 3, left: 1, right: 4, value: 3",
				"id: 4, left: null, right: null, value: 4",
				"id: 5, left: 3, right: null, value: 5",
				"id: 6, left: 5, right: 8, value: 6",
				"id: 7, left: null, right: null, value: 7",
				"id: 8, left: 7, right: 9, value: 8",
				"id: 9, left: null, right: null, value: 9",
				"id: 10, left: 6, right: 15, value: 10",
				"id: 11, left: null, right: 12, value: 11",
				"id: 12, left: null, right: null, value: 12",
				"id: 13, left: 11, right: null, value: 13",
				"id: 14, left: 13, right: null, value: 14",
				"id: 15, left: 14, right: 18, value: 15",
				"id: 16, left: null, right: null, value: 16",
				"id: 17, left: 16, right: null, value: 17",
				"id: 18, left: 17, right: null, value: 18"
		};
		const auto root = 10;
		// const auto tree = BST::CreateBST(root, bst_data);
		const auto expected = true;
		const auto output = algoExpert::binarySearchTrees::validateThreeNodes(nodeOne, nodeThree, nodeTwo); // , tree);
		EXPECT_EQ(expected, output);
	}
	TEST(ValidateThreeNodes, Case13)
	{
		BST* nodeOne = "5";
		BST* nodeThree = "15";
		BST* nodeTwo = "10";
		std::vector<std::string> bst_data = {
				"id: 1, left: null, right: 2, value: 1",
				"id: 2, left: null, right: null, value: 2",
				"id: 3, left: 1, right: 4, value: 3",
				"id: 4, left: null, right: null, value: 4",
				"id: 5, left: 3, right: null, value: 5",
				"id: 6, left: 5, right: 8, value: 6",
				"id: 7, left: null, right: null, value: 7",
				"id: 8, left: 7, right: 9, value: 8",
				"id: 9, left: null, right: null, value: 9",
				"id: 10, left: 6, right: 15, value: 10",
				"id: 11, left: null, right: 12, value: 11",
				"id: 12, left: null, right: null, value: 12",
				"id: 13, left: 11, right: null, value: 13",
				"id: 14, left: 13, right: null, value: 14",
				"id: 15, left: 14, right: 18, value: 15",
				"id: 16, left: null, right: null, value: 16",
				"id: 17, left: 16, right: null, value: 17",
				"id: 18, left: 17, right: null, value: 18"
		};
		const auto root = 10;
		// const auto tree = BST::CreateBST(root, bst_data);
		const auto expected = false;
		const auto output = algoExpert::binarySearchTrees::validateThreeNodes(nodeOne, nodeThree, nodeTwo); // , tree);
		EXPECT_EQ(expected, output);
	}
	TEST(ValidateThreeNodes, Case14)
	{
		BST* nodeOne = "5";
		BST* nodeThree = "4";
		BST* nodeTwo = "3";
		std::vector<std::string> bst_data = {
				"id: 0, left: null, right: null, value: 0",
				"id: 1, left: 0, right: null, value: 1",
				"id: 2, left: 1, right: null, value: 2",
				"id: 3, left: 2, right: 4, value: 3",
				"id: 4, left: null, right: null, value: 4",
				"id: 5, left: 3, right: 7, value: 5",
				"id: 6, left: null, right: null, value: 6",
				"id: 7, left: 6, right: 8, value: 7",
				"id: 8, left: null, right: null, value: 8"
		};
		const auto root = 5;
		// const auto tree = BST::CreateBST(root, bst_data);
		const auto expected = true;
		const auto output = algoExpert::binarySearchTrees::validateThreeNodes(nodeOne, nodeThree, nodeTwo); // , tree);
		EXPECT_EQ(expected, output);
	}
	TEST(ValidateThreeNodes, Case15)
	{
		BST* nodeOne = "5";
		BST* nodeThree = "1";
		BST* nodeTwo = "3";
		std::vector<std::string> bst_data = {
				"id: 0, left: null, right: null, value: 0",
				"id: 1, left: 0, right: null, value: 1",
				"id: 2, left: 1, right: null, value: 2",
				"id: 3, left: 2, right: 4, value: 3",
				"id: 4, left: null, right: null, value: 4",
				"id: 5, left: 3, right: 7, value: 5",
				"id: 6, left: null, right: null, value: 6",
				"id: 7, left: 6, right: 8, value: 7",
				"id: 8, left: null, right: null, value: 8"
		};
		const auto root = 5;
		// const auto tree = BST::CreateBST(root, bst_data);
		const auto expected = true;
		const auto output = algoExpert::binarySearchTrees::validateThreeNodes(nodeOne, nodeThree, nodeTwo); // , tree);
		EXPECT_EQ(expected, output);
	}
	*/
}

