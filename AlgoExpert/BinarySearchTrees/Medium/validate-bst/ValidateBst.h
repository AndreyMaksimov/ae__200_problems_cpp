#pragma once
#include <vector>
#include <limits>

namespace algoExpert::binarySearchTrees {
	using std::vector;
	class BST {
	public:
		int value;
		BST* left;
		BST* right;

		BST(int val);
		BST& insert(int val);
	};


	bool validNode(BST*node, int min_val, int max_val) {
		if (!node) return true;
		if (node->value < min_val || node->value >= max_val) return false;
		return validNode(node->left, min_val, node->value) && validNode(node->right, node->value, max_val);
	}

	bool validateBst(BST* tree) {
		// Write your code here.
		return validNode(tree, std::numeric_limits<int>::min(), std::numeric_limits<int>::max());
	}

}
