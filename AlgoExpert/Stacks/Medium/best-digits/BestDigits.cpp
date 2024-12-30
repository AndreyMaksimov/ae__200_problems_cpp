// https://www.algoexpert.io/questions/best-digits
//
// #Stacks
// #Medium

#include <algorithm>
#include <deque>
#include "BestDigits.h"

namespace algoExpert::stacks {

    class MaxStack
    {
        std::deque<int> m_stack;
    public:
        MaxStack() = default;
        void push(int value) {
            m_stack.emplace_back(value);
        }
        int pop_max() {
            // TODO: that is probably a weak point - full range sorting at each char shift
            const auto it = std::max_element(m_stack.begin(), m_stack.end());
            const auto max_value = *it;
            m_stack.erase(m_stack.begin(), it+1);
            return max_value;
        }
        int size() const {
            return static_cast<int>(m_stack.size());
        }
    };
    string bestDigits(string number, int numDigits) {
        if (number.empty()) return "";
        if (numDigits < 1) return number;

        // fill stack for the 1-st time. Store (numDigits+1) from "number" head
        MaxStack max_stack;
        for (int i = 0; i <= numDigits; ++i) {
            max_stack.push(number[i] - 0x30); // ASCII -> digit
        }
        string result;
        auto num_idx = numDigits;
        const auto len = static_cast<int>(number.size());
        // loop over remain part of "number"
        while (true) {
            const auto c = static_cast<char>(max_stack.pop_max() + 0x30); // digit -> ASCII
            result.push_back(c);
            if (++num_idx == len) break;
            max_stack.push(number[num_idx] - 0x30); // ASCII -> digit
        }
        return result;
    }
}
