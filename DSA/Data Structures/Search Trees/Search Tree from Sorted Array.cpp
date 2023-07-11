//
// Created by SHANTANU on 04-07-2023.
//
#include <bits/stdc++.h>
#include "Binary Search Tree.h"

using namespace std;

template<typename nodeType>
class Solution {
private:
    Node<nodeType> *dfs(int startIndex, int endIndex, vector<nodeType> &nums) {
        if (startIndex > endIndex || endIndex < startIndex) {
            return NULL;
        }
        int mid = (startIndex + endIndex) / 2;

        Node<nodeType> *ptr = new Node<nodeType>(nums[mid]);

        ptr->left = dfs(startIndex, mid - 1, nums);
        ptr->right = dfs(mid + 1, endIndex, nums);

        return ptr;
    }

public:
    Node<nodeType> *sortedArrayToBST(vector<nodeType> &nums) {
        Node<int> *root = dfs(0, nums.size() - 1, nums);

    }
};

int main() {
    Solution<int> solution;


    return 0;
}