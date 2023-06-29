//
// Created by SHANTANU on 18-06-2023.
//
#include <bits/stdc++.h>
#include "Binary Tree.h"

using namespace std;


class Solution {
public:
    void ReverseLevelOrder(Node *root) {
        queue<Node *> Q;
        vector<int> A;
        Node *temp;

        Q.push(root);

        while (!Q.empty()) {
            temp = Q.front();
            Q.pop();

            A.push_back(temp->data);

            if (temp->left) Q.push(temp->left);
            if (temp->right) Q.push(temp->right);
        }

        reverse(A.begin(), A.end());

        for (int a: A) {
            cout << a << " ";
        }

    }
};

int main() {
    Tree tree;
    Solution solution;

    solution.ReverseLevelOrder(tree.root);

    return 0;
}