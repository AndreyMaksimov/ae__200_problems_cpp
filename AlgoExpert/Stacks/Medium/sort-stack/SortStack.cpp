// https://www.algoexpert.io/questions/sort-stack
//
// #Stacks
// #Medium

#include <stack>
#include <algorithm>
#include "SortStack.h"

namespace algoExpert::stacks {
    int stack_sorter(std::stack<int>& st, int value, bool& swap_done) {
        if (st.empty()) return value;
        auto next_value = st.top();
        st.pop();
        if (next_value < value) { // compare stack neighbours
            std::swap(value, next_value);
            swap_done = true;
        }
        st.push(stack_sorter(st, next_value, swap_done));
        return value;
    }

    void sort_stack(std::stack<int>& st) {
        if (st.empty()) return;
        while (true) { // run sorter until no swaps happen during a run
            bool swap_done = false;
            auto a = st.top();
            st.pop();
            a = stack_sorter(st, a, swap_done);
            st.push(a);
            if (!swap_done) break;
        }
    }

    vector<int> sortStack(vector<int>& array) {
        std::stack<int> st;
        // prepare native stack
        for (const auto& element : array) {
            st.push(element);
        }

        // sort it
        sort_stack(st);

        // copy sorted stack back to vector
        vector<int> result;
        while (!st.empty()) {
            result.push_back(st.top());
            st.pop();
        }

        return result;
    }
}
