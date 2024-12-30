// https://www.algoexpert.io/questions/best-digits
//
// #Stacks
// #Medium

#include <stack>
#include <algorithm>
#include "BestDigits.h"

namespace algoExpert::stacks {
    string bestDigits(string number, int numDigits) {
        std::stack<char> stack;

        for(auto character : number) {
            while (numDigits > 0 && !stack.empty() && character > stack.top()) {
                numDigits--;
                stack.pop();
            }
            stack.push(character);
        }

        while (numDigits > 0) {
            stack.pop();
            --numDigits;
        }

        string result;
        while(!stack.empty()) {
            result += stack.top();
            stack.pop();
        }
        std::reverse(result.begin(), result.end());
        return result;
    }
}
