// https://www.algoexpert.io/questions/merging-linked-lists
//
// #LinkedLists
// #Medium

#include <unordered_set>
#include "MergingLinkedLists.h"

namespace algoExpert::linkedLists {
    // This is an input struct. Do not edit.
    class LinkedList {
    public:
        int value;
        LinkedList* next = nullptr;

        LinkedList(int value) { this->value = value; }
    };

    using std::unordered_set;
    LinkedList* mergingLinkedLists(
      LinkedList* linkedListOne, LinkedList* linkedListTwo
    ) {
        if (linkedListOne == nullptr || linkedListTwo == nullptr) return nullptr;
        unordered_set<LinkedList*> set;

        for (auto it = linkedListOne; it != nullptr; it = it->next) {
            set.insert(it);
        }
        for (auto it = linkedListTwo; it != nullptr; it = it->next) {
            const auto pos = set.find(it);
            if (pos != set.end()) return *pos;
        }
        return nullptr;
    }

}
