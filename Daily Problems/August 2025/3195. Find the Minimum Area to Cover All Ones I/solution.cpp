#include <bits/stdc++.h>
using namespace std;


class Solution
{
public:
    int minimumArea(vector<vector<int>> &grid)
    {
        int rez = 0;
        pair<int, int> lC = {INT_MAX, INT_MAX};
        pair<int, int> rC = {INT_MIN, INT_MIN};

        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[0].size(); j++)
            {
                if (grid[i][j] == 1)
                {
                    // setting the left corner
                    lC.first = min(lC.first, i);
                    lC.second = min(lC.second, j);

                    // setting the right corner
                    rC.first = max(rC.first, i);
                    rC.second = max(rC.second, j);
                }
            }
        }

        cout << "lC: (" << lC.first << ", " << lC.second << ")" << endl;
        cout << "rC: (" << rC.first << ", " << rC.second << ")" << endl;

        return (rC.first - lC.first + 1) * (rC.second - lC.second + 1);
    }
};

int main() {
    Solution solution;
    return 0;
}
