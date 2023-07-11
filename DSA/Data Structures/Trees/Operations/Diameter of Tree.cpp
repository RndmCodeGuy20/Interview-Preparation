//
// Created by SHANTANU on 03-07-2023.
//
#include <bits/stdc++.h>
#include "../Binary Tree.h"

using namespace std;

class Solution {
public:
    int curr = 0;

    int diameterOfTree(Node *ptr) {
        if (!ptr) return 0;

        int left = diameterOfTree(ptr->left);
        int right = diameterOfTree(ptr->right);

        curr = max(curr, left + right);
        return max(left, right) + 1;
    }
};


int main() {
    Solution solution;
    Tree tree({1, 2, 3, 4, 5});

    cout << solution.diameterOfTree(tree.root) << " " << solution.curr;


    return 0;
}