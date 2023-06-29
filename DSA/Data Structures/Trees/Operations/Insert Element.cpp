//
// Created by SHANTANU on 18-06-2023.
//
#include <bits/stdc++.h>
#include "Binary Tree.h"

using namespace std;

class Solution
{
public:
    void InsertElementRecursive(Node *q, int value)
    { // inserting in only the left most node.
        if (q->left == NULL)
        {
            Node *newNode = new Node(value, NULL, NULL);
            q->left = newNode;
            return;
        }
        else if (q->right == NULL)
        {
            Node *newNode = new Node(value, NULL, NULL);
            q->right = newNode;
            return;
        }

        InsertElementRecursive(q->left, value);
    }

    void InsertElementIterative(Node *q, int value)
    {
        queue<Node *> Q;
        Node *temp;
        Node *newNode = new Node(value, NULL, NULL);

        if (!q)
        {
            q = newNode;
            return;
        };

        Q.push(q);

        while (!Q.empty())
        {
            temp = Q.front();
            Q.pop();

            if (temp->left)
            {
                Q.push(temp->left);
            }
            else
            {
                q->left = newNode;
                return;
            }
            if (temp->right)
            {
                Q.push(temp->right);
            }
            else
            {
                q->right = newNode;
                return;
            }
        }
    }
};

int main()
{
    Tree tree;
    Solution solution;

    solution.InsertElementRecursive(tree.root, 4);
    tree.LevelOrder();

    cout << endl;

    solution.InsertElementIterative(tree.root, 5);
    tree.LevelOrder();

    return 0;
}