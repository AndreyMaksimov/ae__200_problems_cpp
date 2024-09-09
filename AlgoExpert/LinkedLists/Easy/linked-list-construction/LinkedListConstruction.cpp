// https://www.algoexpert.io/questions/linked-list-construction
//
// #LinkedLists
// #Easy

#include "LinkedListConstruction.h"

#include <iostream>
#include <set>

namespace algoExpert::linkedLists {
    using std::cout, std::endl;

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

            if (node == nullptr) return;
            cout << "setHead " << node->value << endl;
            if (head == nullptr) {
                head = node;
                tail = node;
                return;
            }
            if (head == node) return;
            remove(node);
            node->prev = nullptr;
            node->next = head;
            head->prev = node;
            head = node;
        }

        void setTail(Node* node) {
            if (node == nullptr) return;
            cout << "setTail " << node->value << endl;
            if (tail == nullptr) {
                tail = node;
                head = node;
                return;
            }
            if (tail == node) return;
            remove(node);
            node->next = nullptr;
            node->prev = tail;
            tail->next = node;
            tail = node;
        }

        void insertBefore(Node* node, Node* nodeToInsert) {
            if (node == nullptr || nodeToInsert == nullptr) return;
            if (node == nodeToInsert) return;
            if (node == head) {
                setHead(nodeToInsert);
                return;
            }
            cout << "insertBefore \tnode = " << node->value << " \tnodeToInsert = " << nodeToInsert->value << endl;
            cout << "insertBefore nodeToInsert prev = " << nodeToInsert->prev << " \tnext = " << nodeToInsert->next << endl;
            remove(nodeToInsert);
            nodeToInsert->prev = node->prev;
            if (nodeToInsert->prev != nullptr) nodeToInsert->prev->next = nodeToInsert;
            nodeToInsert->next = node;
            node->prev = nodeToInsert;
            cout << "insertBefore done" << endl;
        }

        void insertAfter(Node* node, Node* nodeToInsert) {
            if (node == nullptr || nodeToInsert == nullptr) {
                cout << "insertAfter point 1" << endl;
                return;
            }
            if (node == nodeToInsert) {
                cout << "insertAfter point 2" << endl;
                return;
            }
            if (node == tail) {
                setTail(nodeToInsert);
                return;
            }
            cout << "insertAfter \tnode = " << node->value << " \tnodeToInsert = " << nodeToInsert->value << endl;
            remove(nodeToInsert);
            nodeToInsert->next = node->next;
            if (nodeToInsert->next != nullptr) nodeToInsert->next->prev = nodeToInsert;
            nodeToInsert->prev = node;
            node->next = nodeToInsert;
            cout << "insertAfter done" << endl;
        }

        void insertAtPosition(int position, Node* nodeToInsert) {
            if (nodeToInsert == nullptr) return;
            cout << "insertAtPosition point 1 position = " << position << " \tvalue = " << nodeToInsert->value << endl;
            if (position < 1) return;
            if (position == 1) {
                setHead(nodeToInsert);
                return;
            }
            auto ptr = findNodeAtPosition(position-1);
            if (ptr == nullptr) return;
            cout << "insertAtPosition point 2 ptr->value = " << ptr->value << endl;
            insertAfter(ptr, nodeToInsert);
        }

        [[nodiscard]] Node* findNodeAtPosition(const int position) {
            if (position < 1 ) return nullptr;
            if (head == nullptr) return nullptr;
            auto ptr = head;;
            int count = 1;
            while (count < position && ptr != nullptr) {
                ptr = ptr->next;
                ++count;
            }
            return ptr;
        }

        void removeNodesWithValue(const int value) {
            cout << "removeNodesWithValue " << value << endl;
            auto ptr = findNodeWithValue(value);
            while (ptr != nullptr) {
                cout << "\tremoveNodesWithValue found " << endl;
                remove(ptr);
                ptr = findNodeWithValue(value);
            }

        }

        void remove(Node* node) {
            if (node == nullptr) return;
            if (node == head && node == tail) {
                head = nullptr;
                tail = nullptr;
                return;
            }
            if (node->next == nullptr && node->prev == nullptr) {
                return;
            }
            if (node == head) {
                cout << "point 1" << endl;
                head = node->next;
                node->next = nullptr;
                head->prev = nullptr;
                cout << "point 2" << endl;
                return;
            }
            if (node == tail) {
                cout << "point 3" << endl;
                tail = node->prev;
                node->prev = nullptr;
                tail->next = nullptr;
                cout << "point 4" << endl;
                return;
            }
            cout << "point 5" << endl;
            if (node->prev != nullptr) {
                node->prev->next = node->next;
                // if (node->next != nullptr) node->next->prev = node->prev;

            }
            if (node->next != nullptr) {
                node->next->prev = node->prev;
                // if (node->prev != nullptr) node->prev->next = node->next;
            }
            node->prev = nullptr;
            node->next = nullptr;
            cout << "point 6" << endl;
        }

        [[nodiscard]] bool containsNodeWithValue(const int value) const {
            return findNodeWithValue(value) != nullptr;
        }

        [[nodiscard]] Node* findNodeWithValue(const int value) const {
            auto ptr = head;
            while (ptr != nullptr && ptr->value != value) {
                ptr = ptr->next;
            }
            return ptr;
        }

        bool containsNode(const Node* const node) const {
            if (node == nullptr) return false;
            if (head == nullptr) return false;
            auto ptr = head;
            while (ptr != nullptr) {
                if (ptr == node) return true;
                ptr = ptr->next;
            }
            return false;
        }
    };
}
