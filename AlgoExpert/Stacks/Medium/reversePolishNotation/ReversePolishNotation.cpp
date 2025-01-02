// https://www.algoexpert.io/questions/reversePolishNotation
//
// #Stacks
// #Medium

#include <stack>
#include "ReversePolishNotation.h"

namespace algoExpert::stacks {
    int reversePolishNotation(vector<string> tokens) {
        std::stack<int> values;
        int a, b;
        auto ab = [&]() {b = values.top(); values.pop(); a = values.top(); values.pop();};
        auto plus  = [&] () {ab(); const auto r = a + b; values.push(r); };
        auto minus = [&] () {ab(); const auto r = a - b; values.push(r); };
        auto mult  = [&] () {ab(); const auto r = a * b; values.push(r); };
        auto div   = [&] () {ab(); const auto r = a / b; values.push(r); };
        for (const auto& token : tokens) {
            if (token.size() > 1) {
                values.push(std::stoi(token));
                continue;
            }
            switch (token[0]) {
                case '+':
                    plus();
                    break;
                case '-':
                    minus();
                    break;
                case '*':
                    mult();
                    break;
                case '/':
                    div();
                    break;
                default:
                    values.push(std::stoi(token));
            }
        }
        return values.top();
    }
}
