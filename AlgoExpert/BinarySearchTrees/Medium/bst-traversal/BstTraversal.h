#pragma once
#include <vector>

namespace algoExpert::binarySearchTrees {
	using std::vector;
	class BST {
	public:
		int value;
		BST* left;
		BST* right;

		BST(int val);
	};

	void inOrderTraverse(BST* tree, vector<int>& array);
	void preOrderTraverse(BST* tree, vector<int>& array);
	void postOrderTraverse(BST* tree, vector<int>& array);
}
