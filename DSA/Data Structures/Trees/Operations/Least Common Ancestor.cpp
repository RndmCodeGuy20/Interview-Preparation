//
// Created by SHANTANU on 03-07-2023.
//

#include <bits/stdc++.h>
#include "../Binary Tree.h"

using namespace std;

class Solution {
public:
    Node *lowestCommonAncestor(Node *ptr, Node *p, Node *q) {
        if (!ptr) return NULL;
        if (ptr == p || ptr == q) return ptr;

        Node *left = lowestCommonAncestor(ptr->left, p, q);
        Node *right = lowestCommonAncestor(ptr->right, p, q);

        if (left && right) return ptr;
        else return left ? left : right;
    }
};

int main() {
    Solution solution;
    Tree tree({1, 2, 3, 4, 5});
    Node *p = tree.root->left->right; // 5
    Node *q = tree.root->left; // 3

    cout << solution.lowestCommonAncestor(tree.root, p, q)->data;


    return 0;
}