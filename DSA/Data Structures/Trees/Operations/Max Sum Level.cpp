#include <bits/stdc++.h>
#include "../Binary Tree.h"
using namespace std;

class Solution
{
public:
    int maxSumLevel(Node *root)
    {
        Node *temp;
        queue<Node *> Q;
        int currSum = 0, maxSum = 0;
        int level = 0, maxLevel = 0;

        Q.push(root);
        Q.push(NULL);

        while (!Q.empty())
        {
            temp = Q.front();
            Q.pop();

            if (temp == NULL)
            {
                if (currSum > maxSum)
                {
                    maxSum = currSum;
                    maxLevel = level;
                }

                currSum = 0;

                if (!Q.empty())
                {
                    Q.push(NULL);
                }
                level++;
            }
            else
            {
                currSum += temp->data;

                if (temp->left)
                {
                    Q.push(temp->left);
                }
                if (temp->right)
                {
                    Q.push(temp->right);
                }
            }
        }
        cout << maxSum << endl;
        return maxLevel;
    }
};

int main()
{
    Tree tree;
    Solution solution;

    cout << solution.maxSumLevel(tree.root);

    return 0;
}