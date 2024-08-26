#pragma once
#include <vector>
#include <string>
#include <optional>

namespace algoExpert::famousAlgorithms {
	using std::vector, std::string;
	using std::optional;
	// Do not edit the class below except for
	// the constructor, push, pop, peek, and
	// isEmpty methods. Feel free to add new
	// properties and methods to the class.
	class UnionFind {
	public:
		void createSet(int value);

		optional<int> find(int value);

		void createUnion(int valueOne, int valueTwo);
	};
}
