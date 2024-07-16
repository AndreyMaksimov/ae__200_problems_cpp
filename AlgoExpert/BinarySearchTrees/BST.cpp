#include <string>
#include "BST.h"

namespace algoExpert::binarySearchTrees {
    using std::string;

    BST::BST(const int val) : value(val) {
    }

    BST& BST::insert(const int val) {
        if (val >= value) {
            if (right) return right->insert(val);
            right = new BST(val);
            return *right;
        }
        else {
            if (left) return left->insert(val);
            left = new BST(val);
            return *left;
        }
    }

    struct bst_item {
        string id;
        string left_id;
        string right_id;
        int value;
        // parse a string like "id: 10, left: 5, right: 15, value: 10"
        bst_item(const string& bst_str) {
            auto i = bst_str.find(' ');
            auto j = bst_str.find(',');
            id = bst_str.substr(i+1, (j-i-1));
            i = bst_str.find(' ', j+2);
            j = bst_str.find(',', i);
            left_id = bst_str.substr(i+1, (j-i-1));
            i = bst_str.find(' ', j+2);
            j = bst_str.find(',', i);
            right_id = bst_str.substr(i+1, (j-i-1));
            i = bst_str.find(' ', j+2);
            const auto value_str = right_id = bst_str.substr(i+1, (bst_str.length()-i-1));
            value = std::stoi(value_str);
        }
    };

    BST* BST::CreateBST(const int root, const std::vector<std::string>& bst_data) {
        BST* pbst_root = nullptr;
        for (const auto& line: bst_data) {
            const auto node = bst_item(line);
            if (pbst_root == nullptr) {
                pbst_root = new BST(node.value);
            }
            else {
                pbst_root->insert(node.value);
            }
        }
        return pbst_root;
    }

}
