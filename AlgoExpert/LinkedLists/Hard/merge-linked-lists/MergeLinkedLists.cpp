// https://www.algoexpert.io/questions/merge-linked-lists
//
// #LinkedLists
// #Hard

#include "MergeLinkedLists.h"

namespace algoExpert::linkedLists {
    class LinkedList {
    public:
        int value;
        LinkedList* next;

        LinkedList(int value) {
            this->value = value;
            next = nullptr;
        }
    };

    LinkedList* mergeLinkedLists(LinkedList* headOne, LinkedList* headTwo) {
        decltype(headOne) mergedHead = nullptr;
        decltype(headOne) mergedTail = nullptr;

        if (headOne->value < headTwo->value) {
            mergedHead = headOne;
            headOne = headOne->next;
        }
        else {
            mergedHead = headTwo;
            headTwo = headTwo->next;
        }
        mergedTail = mergedHead;
        mergedTail->next = nullptr;

        while (headOne != nullptr && headTwo != nullptr) {
            if (headOne->value < headTwo->value) {
                mergedTail->next = headOne;
                headOne = headOne->next;
            }
            else {
                mergedTail->next = headTwo;
                headTwo = headTwo->next;
            }
            mergedTail = mergedTail->next;
            mergedTail->next = nullptr;
        }

        if (headOne != nullptr) {
            mergedTail->next = headOne;
        }
        else if (headTwo != nullptr) {
            mergedTail->next = headTwo;
        }

        return mergedHead;
    }
}
