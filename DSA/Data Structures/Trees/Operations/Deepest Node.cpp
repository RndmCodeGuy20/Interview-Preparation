//
// Created by SHANTANU on 21-06-2023.
//
#include <bits/stdc++.h>
#include "../Binary Tree.h"
using namespace std;

class Solution
{
public:
    Node *DeepestNode(Node *root)
    {
        queue<Node *> Q;
        Node *temp;

        Q.push(root);

        while (!Q.empty())
        {
            temp = Q.front();
            Q.pop();

            if (temp->left)
                Q.push(temp->left);

            if (temp->right)
                Q.push(temp->right);
        }

        return temp;
    }
};

int main()
{
    Tree tree;
    Solution solution;

    cout << solution.DeepestNode(tree.root)->data;

    return 0;
}