// https://www.algoexpert.io/questions/sum-of-linked-lists
//
// #LinkedLists
// #Medium

#include "SumOfLinkedLists.h"

namespace algoExpert::linkedLists {
    // This is an input struct. Do not edit.
    class LinkedList {
    public:
        int value;
        LinkedList* next = nullptr;

        LinkedList(int value) { this->value = value; }
    };

    LinkedList* Revert(const LinkedList* linkedList) {
        if (linkedList == nullptr) return nullptr;
        auto ptr = linkedList;
        LinkedList* revertedList = nullptr;
        while (ptr != nullptr) {
            const auto node = new LinkedList(ptr->value);
            node->next = revertedList;
            revertedList = node;
            ptr = ptr->next;
        }
        return revertedList;
    }

    // void print(const char* name, const LinkedList* linkedList) {
    //     using std::cout, std::endl;
    //     cout << name << ": \t";
    //     for (auto node = linkedList; node != nullptr; node = node->next) {
    //         cout << node->value << " ";
    //     }
    //     cout << endl;
    // }

    LinkedList* sumOfLinkedLists(
      LinkedList* linkedListOne, LinkedList* linkedListTwo
    )
    {
        LinkedList* sum = nullptr;
        auto d = 0;
        while (linkedListOne != nullptr || linkedListTwo != nullptr) {
            const auto d1 = linkedListOne != nullptr ? linkedListOne->value : 0;
            const auto d2 = linkedListTwo != nullptr ? linkedListTwo->value : 0;
            // elementary school two numbers addition
            const auto sd = d + d1 + d2;
            d = sd / 10;
            auto s = sd > 9 ? sd % 10 : sd;
            const auto node = new LinkedList(s);
            node->next = sum;
            sum = node;
            if (linkedListOne != nullptr) linkedListOne = linkedListOne->next;
            if (linkedListTwo != nullptr) linkedListTwo = linkedListTwo->next;
        }
        if (d != 0) {
            const auto node = new LinkedList(d);
            node->next = sum;
            sum = node;
        }
        return Revert(sum);
    }
}
