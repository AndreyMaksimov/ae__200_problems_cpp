// https://www.algoexpert.io/questions/best-digits
//
// #Stacks
// #Medium

#include <utility>
#include <algorithm>
#include "BestDigits.h"

namespace algoExpert::stacks {

    // first - value in the current index i
    // second - index where max value is stored (inside interval [0, i])
    using value_max_id_t = std::pair<int, int>;

    // Let's use an idea from the problem "Min Max Stack Construction"
    // https://www.algoexpert.io/questions/min-max-stack-construction
    // Just slightly update class properties
    class MaxStack
    {
        vector<value_max_id_t> m_stack;
    public:
        MaxStack() = default;
        void push(int value) {
            if (m_stack.empty()) {
                m_stack.emplace_back(value, 0);
            }
            else {
                const auto& idx_with_max_value = m_stack.back().second;
                const auto& max_value = m_stack[idx_with_max_value].first;
                if (value >= max_value) {  // important '=>' ! (not just '>')
                    const auto len = static_cast<int>(m_stack.size());
                    m_stack.emplace_back(value, len);
                }
                else {
                    m_stack.emplace_back(value, idx_with_max_value);
                }
            }
        }
        int pop_max() {
            const auto& idx_with_max_value = m_stack.back().second;
            const auto max_value = m_stack[idx_with_max_value].first;
            m_stack.resize(idx_with_max_value);
            return max_value;
        }
        int size() const {
            return static_cast<int>(m_stack.size());
        }
    };
    string bestDigits(string number, int numDigits) {
        if (number.empty()) return "";
        if (numDigits < 1) return number;

        // fill stack for the 1-st time
        MaxStack max_stack;
        for (int i = numDigits; i >= 0; --i) {
            max_stack.push(number[i] - 0x30); // ASCII -> digit
        }
        string result;
        auto num_idx = numDigits;
        const auto len = static_cast<int>(number.size());
        while (true) {
            const auto c = static_cast<char>(max_stack.pop_max() + 0x30);
            result.push_back(c);
            if (++num_idx == len) break;
            max_stack.push(number[num_idx] - 0x30);
        }
        return result;
    }
}
