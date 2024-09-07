// https://www.algoexpert.io/questions/linked-list-construction
//
// #LinkedLists
// #Easy

#include "LinkedListConstruction.h"

#include <memory>

namespace algoExpert::linkedLists {
    class Node {
    public:
        int value;
        Node* prev;
        Node* next;

        Node(int value);
    };

    class DoublyLinkedList {
    public:
        Node* head;
        Node* tail;

        DoublyLinkedList() {
            head = nullptr;
            tail = nullptr;
        }

        void setHead(Node* node) {
            // Write your code here.
        }

        void setTail(Node* node) {
            // Write your code here.
        }

        void insertBefore(Node* node, Node* nodeToInsert) {
            // Write your code here.
        }

        void insertAfter(Node* node, Node* nodeToInsert) {
            // Write your code here.
        }

        void insertAtPosition(int position, Node* nodeToInsert) {
            // Write your code here.
        }

        void removeNodesWithValue(int value) {
            remove(findNodeWithValue(value));
        }

        void remove(Node* node) {
            if (node == nullptr) return;
            if (node->next == nullptr && node->prev == nullptr) {
                return;
            }
            if (node->prev != nullptr) {
                node->prev->next = node->next;
                node->prev = nullptr;
            }
            if (node->next != nullptr) {
                node->next->prev = node->prev;
                node->next = nullptr;
            }
        }

        bool containsNodeWithValue(int value) {
            // Write your code here.
            return findNodeWithValue(value) != nullptr;
        }

        Node* findNodeWithValue(const int value) const {
            auto ptr = head;
            while (ptr != nullptr && ptr->value != value) {
                ptr = ptr->next;
            }
            return ptr;
        }
    };
}
