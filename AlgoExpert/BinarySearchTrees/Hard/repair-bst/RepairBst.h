#pragma once
#include <vector>

namespace algoExpert::binarySearchTrees {
	using std::vector;
	// This is an input class. Do not edit.
	class BST {
	public:
		int value;
		BST* left = nullptr;
		BST* right = nullptr;

		BST(int value) { this->value = value; }
	};

	BST* repairBst(BST* tree);
}
