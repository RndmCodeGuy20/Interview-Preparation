//
// Created by SHANTANU on 21-06-2023.
//
#include <bits/stdc++.h>
#include "../Binary Tree.h"

using namespace std;

class Solution {
private:
    void PrintArray(vector<int> path, int pathLength) {
        for (int i = 0; i < pathLength; ++i) {
            cout << path[pathLength] << " ";
        }
    }

public:
    void PrintRootToLeafPaths(Node *ptr, vector<int> &path, int pathLength) {
        if (ptr == NULL) return;

        path[pathLength] = ptr->data;
        pathLength++;

        if (!ptr->left && !ptr->right) {
            PrintArray(path, pathLength);
        } else {
            PrintRootToLeafPaths(ptr->left, path, pathLength);
            PrintRootToLeafPaths(ptr->right, path, pathLength);
        }
    }
};

int main() {
    Tree tree;
    Solution solution;
    vector<int> path(-1, 100);

    solution.PrintRootToLeafPaths(tree.root, path, 0);


    return 0;
}