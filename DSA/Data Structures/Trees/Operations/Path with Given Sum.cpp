//
// Created by SHANTANU on 03-07-2023.
//
#include <bits/stdc++.h>
#include "../Binary Tree.h"

using namespace std;

class Solution {
public:
    bool pathExists(Node *ptr, int target) {
        if (target == 0) return true;
        if (!ptr) return false;

        bool left = pathExists(ptr->left, target - ptr->data);
        bool right = pathExists(ptr->right, target - ptr->data);

        return left || right;
    }
};

int main() {
    Solution solution;
    Tree tree({1, 2, 3});

    cout << solution.pathExists(tree.root, 5);


    return 0;
}