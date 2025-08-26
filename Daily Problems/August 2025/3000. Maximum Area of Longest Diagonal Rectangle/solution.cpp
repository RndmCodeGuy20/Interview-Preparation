#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    float calculateDiagonal(int length, int width)
    {
        return sqrt(pow(length, 2) + pow(width, 2));
    }

public:
    int areaOfMaxDiagonal(vector<vector<int>> &dimensions)
    {
        int rez = 0;
        float maxDiagonal = 0;

        for (size_t i = 0; i < dimensions.size(); ++i)
        {
            vector<int> &dimension = dimensions[i];
            float diagonal = calculateDiagonal(dimension[0], dimension[1]);
            cout << "diagonal: " << diagonal << " for i:" << i << endl;
            if (diagonal > maxDiagonal)
            {
                maxDiagonal = diagonal;
                rez = dimension[0] * dimension[1];
            }
            else if (diagonal == maxDiagonal)
            {
                rez = max(rez, dimension[0] * dimension[1]);
            }
        }

        return rez;
    }
};

int main()
{
    Solution solution;

    // vector<vector<int>> dimensions = {{3, 4}, {5, 12}, {8, 15}, {7, 24}};
    // cout << solution.areaOfMaxDiagonal(dimensions) << endl;

    // vector<vector<int>> test = {{6, 8}, {10, 1}}; // (6,8) and (5,12) both have diagonal 10, but areas 48 and 60
    // cout << solution.areaOfMaxDiagonal(test) << endl;

    vector<vector<int>> dimensions = {{10, 3}, {5, 9}, {8, 3}};
    cout << solution.areaOfMaxDiagonal(dimensions) << endl;

    return 0;
}