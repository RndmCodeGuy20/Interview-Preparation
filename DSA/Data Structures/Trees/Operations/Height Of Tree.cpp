//
// Created by SHANTANU on 18-06-2023.
//
#include <bits/stdc++.h>
#include "../Binary Tree.h"
using namespace std;

class Solution
{
public:
    int TreeDepthRecursive(Node *ptr)
    {
        if (!ptr)
        {
            return 0;
        }

        int leftDepth = TreeDepthRecursive(ptr->left);
        int rightDepth = TreeDepthRecursive(ptr->right);

        return max(leftDepth + 1, rightDepth + 1);
    }

    int TreeDepthIterative(Node *root)
    {
        queue<Node *> Q;
        Node *temp;
        int depth = 0;

        Q.push(root);
        Q.push(NULL);

        while (!Q.empty())
        {
            temp = Q.front();
            Q.pop();

            if (temp == NULL)
            {
                if (!Q.empty())
                {
                    depth++;
                    Q.push(NULL);
                }
            }
            else
            {
                if (temp->left)
                    Q.push(temp->left);

                if (temp->right)
                    Q.push(temp->right);
            }
        }

        return depth;
    }
};

int main()
{
    Tree tree;
    Solution solution;

    cout << solution.TreeDepthRecursive(tree.root);
    cout << solution.TreeDepthIterative(tree.root);

    return 0;
}