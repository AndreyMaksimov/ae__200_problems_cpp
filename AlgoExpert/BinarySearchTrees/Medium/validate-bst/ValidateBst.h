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


	bool validNode(BST*node, int min_val, int max_val);

	bool validateBst(BST* tree);

}
