// https://www.algoexpert.io/questions/remove-duplicates-from-linked-list
//
// #LinkedLists
// #Easy

#include "RemoveDuplicatesFromLinkedList.h"

namespace algoExpert::linkedLists {
    // This is an input struct. Do not edit.
    class LinkedList {
    public:
        int value;
        LinkedList* next = nullptr;

        LinkedList(int value) { this->value = value; }
    };

    LinkedList* removeDuplicatesFromLinkedList(LinkedList* linkedList) {
        if (linkedList == nullptr || linkedList->next == nullptr) {
            return linkedList;
        }
        auto ptr = linkedList;

        while (ptr != nullptr) {
            // check if next value is equal to current one
            while (ptr->next != nullptr && (ptr->value == ptr->next->value)) {
                // skip that node if so
                ptr->next = ptr->next->next;
            }
            // regular shift to the next
            ptr = ptr->next;
        }

        return linkedList;
    }
}
