//
// Created by SHANTANU on 18-06-2023.
//
#include "../Binary Tree.h"
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void PreOrderRecursive(Node *ptr) {
        if (ptr == NULL) return;
        cout << ptr->data << " ";
        PreOrderRecursive(ptr->left);
        PreOrderRecursive(ptr->right);
    }

    void PreOrderIterative(Node *ptr) {
        stack<Node *> S;
        Node *temp = ptr;

        while (temp != NULL || !S.empty()) {
            while (temp != NULL) {
                cout << temp->data << " ";
                S.push(temp);
                temp = temp->left;
            }

            temp = S.top();
            S.pop();

            temp = temp->right;
        }
    }
};

int main() {
    Tree tree;

    Solution solution;

    cout << "PreOrder Recursive : ";
    solution.PreOrderRecursive(tree.root);

    cout << "\nPreOrder Iterative : ";
    solution.PreOrderIterative(tree.root);

    return 0;
}