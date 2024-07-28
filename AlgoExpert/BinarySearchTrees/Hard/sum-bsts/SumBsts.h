#pragma once
#include <vector>
#include "BST.h"

namespace algoExpert::binarySearchTrees {
	using std::vector;
	class BinaryTree {
	public:
		int value;
		BinaryTree *left = nullptr;
		BinaryTree *right = nullptr;

		BinaryTree(int value) : value(value) {}
	};

	int sumBsts(BinaryTree *tree);

}
