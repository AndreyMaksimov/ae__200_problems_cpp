// https://www.algoexpert.io/questions/balanced-brackets
//
// #Stacks
// #Medium

#include <unordered_set>
#include <unordered_map>
#include <stack>
#include "BalancedBrackets.h"

namespace algoExpert::stacks {
    bool balancedBrackets(string str) {
        std::unordered_set open_brackets{'(', '{'};  // all open ones will be stored to a stack
        std::unordered_map<char, char> close_brackets_map{{')','('}, {'}','{'}};
        std::stack<char> open_brackets_stack;

        for (auto c : str) {
            if (open_brackets.find(c) != open_brackets.end()) {
                open_brackets_stack.push(c);
                continue;
            }
            if (close_brackets_map.find(c) != close_brackets_map.end()) { // close one detected
                if (open_brackets_stack.empty()) return false; // no potential pair et al.
                const auto& open_bracket = close_brackets_map[c]; // valid open one should be that
                if (open_brackets_stack.top() != open_bracket) return false; // invalid one on the top
                open_brackets_stack.pop();
            }
        }
        return open_brackets_stack.empty();
    }
}
