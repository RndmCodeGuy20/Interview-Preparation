#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxBottlesDrunk(int numBottles, int numExchange)
    {
        int total = numBottles;
        int empty = 0;
        while (true)
        {
            // exchange empty bottles for new bottles
            if (empty >= numExchange)
            {
                numBottles += 1;
                empty -= numExchange;
            }
            else
            {
                // drink bottles
                if (numBottles == 0 && empty < numExchange)
                {
                    break;
                }
                total += numBottles;
                empty += numBottles;
                numBottles = 0;
            }
        }
        return total;
    }
};

int main()
{
    Solution solution;
    int numBottles = 10, numExchange = 3;
    cout << solution.maxBottlesDrunk(numBottles, numExchange) << endl;
    return 0;
}