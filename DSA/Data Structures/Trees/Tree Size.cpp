//
// Created by SHANTANU on 18-06-2023.
//
#include "Binary Tree.h"
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int TreeSizeRecursive(Node *ptr) {
        if (!ptr) {
            return -1;
        }

        int left = 1 + TreeSizeRecursive(ptr->left);
        int right = 1 + TreeSizeRecursive(ptr->right);

        return right + left;
    }

    int TreeSizeIterative(Node *root) {
        queue<Node *> Q;
        Node *temp;
        int size = 0;

        Q.push(root);

        while (!Q.empty()) {
            temp = Q.front();
            Q.pop();

            size++;

            if (temp->left) Q.push(temp->left);
            if (temp->right) Q.push(temp->right);
        }

        return size;
    }
};

int main() {

    Tree tree;
    Solution solution;

    cout << solution.TreeSizeRecursive(tree.root);
    cout << endl << solution.TreeSizeIterative(tree.root);


    return 0;
}