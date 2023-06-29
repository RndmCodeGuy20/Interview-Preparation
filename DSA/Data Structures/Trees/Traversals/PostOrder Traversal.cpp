//
// Created by SHANTANU on 18-06-2023.
//
#include "../Binary Tree.h"
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void PostOrderRecursive(Node *root) {
        if (root == NULL) return;
        PostOrderRecursive(root->left);
        PostOrderRecursive(root->right);
        cout << root->data << " ";
    }

    void PostOrderIterative(Node *root) {
        stack<Node *> s;
        Node *curr = root, *temp;
        while (curr != NULL || !s.empty()) {
            if (curr != NULL) {
                s.push(curr);
                curr = curr->left;
            } else {
                temp = s.top()->right;
                if (temp == NULL) {
                    temp = s.top();
                    s.pop();
                    cout << temp->data << " ";
                    while (!s.empty() && temp == s.top()->right) {
                        temp = s.top();
                        s.pop();
                        cout << temp->data << " ";
                    }
                } else {
                    curr = temp;
                }
            }
        }
    }
};

int main() {
    Tree tree;

    Solution solution;

    cout << "PostOrder Recursive : ";
    solution.PostOrderRecursive(tree.root);

    cout << "\nPostOrder Iterative : ";
    solution.PostOrderIterative(tree.root);

    return 0;
}