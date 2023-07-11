//
// Created by SHANTANU on 03-07-2023.
//
#include <bits/stdc++.h>
#include "../Binary Tree.h"

using namespace std;

class Solution {
public:
    Node *mirrorTree(Node *ptr) {
        if (ptr) {
            mirrorTree(ptr->left);
            mirrorTree(ptr->right);
            swap(ptr->left, ptr->right);
        }

        return ptr;
    }
};


int main() {
    Solution solution;
    Tree tree({1, 2, 3, 4, 5});

    tree.root = solution.mirrorTree(tree.root);
    tree.LevelOrder();
    
    return 0;
}