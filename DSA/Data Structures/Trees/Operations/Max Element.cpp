/**
 * @author: RndmCodeGuy20 - Shantanu Mane
 * @date: 18-06-2023
 * @subject: Data Structures
 * @topic: Trees
 * @title: Max Element in a Binary Tree
 * @description: This program finds the maximum element in a binary tree.
*/

#include "Binary Tree.h"
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int MaxElementRecursive(Node *ptr) {
        if (!ptr) return INT_MIN;

        int curr = ptr->data;

        int left = MaxElementRecursive(ptr->left);
        int right = MaxElementRecursive(ptr->right);

        return max(curr, max(right, left));
    }

    int MaxElementIterative(Node *root) {
        Node *temp;
        queue<Node *> Q;
        int maxEl = INT_MIN;

        Q.push(root);

        while (!Q.empty()) {
            temp = Q.front();
            Q.pop();

            maxEl = max(maxEl, temp->data);

            if (temp->left) Q.push(temp->left);
            if (temp->right) Q.push(temp->right);
        }

        return maxEl;
    }
};

int main() {
    Tree tree;

    Solution solution;

    cout << solution.MaxElementRecursive(tree.root);
    cout << endl << solution.MaxElementIterative(tree.root);

    return 0;
}