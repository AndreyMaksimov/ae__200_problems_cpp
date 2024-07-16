#pragma once
#include <vector>
#include <stdexcept>

namespace algoExpert::binarySearchTrees {
	using std::vector;
	class BST {
	public:
		int value;
		BST* left;
		BST* right;

		BST(int val) {
			value = val;
			left = nullptr;
			right = nullptr;
		}

		BST& insert(int val) {
			// Write your code here.
			throw std::logic_error("Not Implemented");
			return *this;
		}

		bool contains(int val) {
			// Write your code here.
			throw std::logic_error("Not Implemented");
			return false;
		}

		BST& remove(int val) {
			// Write your code here.
			// Do not edit the return statement of this method.
			throw std::logic_error("Not Implemented");
			return *this;
		}
	};

}
