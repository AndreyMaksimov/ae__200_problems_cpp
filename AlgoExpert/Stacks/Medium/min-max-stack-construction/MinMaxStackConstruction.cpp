// https://www.algoexpert.io/questions/min-max-stack-construction
//
// #Stacks
// #Medium

#include <utility>
#include <algorithm>
#include "MinMaxStackConstruction.h"

namespace algoExpert::stacks {
    using min_max_t = std::pair<int, int>;
    using value_limits_t = std::pair<int, min_max_t>;
    using stack_t = std::vector<value_limits_t>;
    class MinMaxStack {
        stack_t m_stack;
    public:
        int peek() {
            return m_stack.back().first;
        }

        int pop() {
            const auto back_value = m_stack.back().first;
            m_stack.pop_back();
            return back_value;
        }

        void push(int number) {
            if (m_stack.empty()) {
                min_max_t min_max(number, number);
                value_limits_t value_limits(number, min_max);
                m_stack.push_back(value_limits);
            }
            else {
                const auto& prev_min = m_stack.back().second.first;
                const auto& prev_max = m_stack.back().second.second;
                const auto& new_min = std::min(number, prev_min);
                const auto& new_max = std::max(number, prev_max);
                min_max_t min_max(new_min, new_max);
                value_limits_t value_limits(number, min_max);
                m_stack.push_back(value_limits);
            }
        }

        int getMin() {
            return m_stack.back().second.first;;
        }

        int getMax() {
            return m_stack.back().second.second;
        }
    };

}
