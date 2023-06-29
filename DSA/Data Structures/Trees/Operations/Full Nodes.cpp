//
// Created by SHANTANU on 21-06-2023.
//
#include <bits/stdc++.h>
#include "../Binary Tree.h"
using namespace std;

class Solution
{
public:
    int NumFullNodes(Node *root)
    {
        queue<Node *> Q;
        Node *temp;
        int count = 0;

        Q.push(root);

        while (!Q.empty())
        {
            temp = Q.front();
            Q.pop();

            if (temp->left && temp->right)
            {
                count++;
            }

            if (temp->left)
                Q.push(temp->left);

            if (temp->right)
                Q.push(temp->right);
        }

        return count;
    }
};

int main()
{
    Tree tree;
    Solution solution;

    cout << solution.NumFullNodes(tree.root);

    return 0;
}