//
// Created by SHANTANU on 03-06-2023.
//
#include <bits/stdc++.h>
#include "Binary Tree.h"

using namespace std;


class Solution {
public:
    bool SearchElementRecursive(Node *ptr, int target) {
        if (!ptr) return false;

        if (ptr->data == target) return true;

        bool left = SearchElementRecursive(ptr->left, target);
        bool right = SearchElementRecursive(ptr->right, target);

        return left || right;
    }

    bool SearchElementIterative(Node *root, int target) {
        queue<Node *> Q;
        Node *temp;

        Q.push(root);

        while (!Q.empty()) {
            temp = Q.front();
            Q.pop();

            if (temp->data == target) {
                return true;
            }

            if (temp->left) Q.push(temp->left);
            if (temp->right) Q.push(temp->right);
        }

        return false;
    }
};

int main() {
    Tree tree;

    Solution solution;

    cout << solution.SearchElementRecursive(tree.root, 2);
    cout << endl << solution.SearchElementIterative(tree.root, 2);


    return 0;
}