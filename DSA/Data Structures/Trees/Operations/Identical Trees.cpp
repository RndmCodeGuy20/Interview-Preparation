#include <bits/stdc++.h>
#include "../Binary Tree.h"

using namespace std;

class Solution
{
public:
    bool IdenticalTree(Node *ptrA, Node *ptrB)
    {
        if (!ptrA && !ptrB)
            return true;
        if (!ptrA || !ptrB)
            return false;

        bool matchLeft = IdenticalTree(ptrA->left, ptrB->left);
        bool matchRight = IdenticalTree(ptrA->right, ptrB->right);

        return (matchLeft && matchRight && ptrA->data == ptrB->data);
    }
};

int main()
{
    Tree tree1;
    Tree tree2;
    Solution solution;

    cout << solution.IdenticalTree(tree1.root, tree2.root);

    return 0;
}