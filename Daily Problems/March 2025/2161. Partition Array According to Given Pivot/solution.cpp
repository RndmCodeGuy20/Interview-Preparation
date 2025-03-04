#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> pivotArray(vector<int> &nums, int pivot)
    {
        vector<int> rez;

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < nums.size(); j++)
            {
                if (nums[j] < pivot && i == 0)
                {
                    rez.push_back(nums[j]);
                }
                else if (nums[j] == pivot && i == 1)
                {
                    rez.push_back(nums[j]);
                }
                else if (nums[j] > pivot && i == 2)
                {
                    rez.push_back(nums[j]);
                }
            }
        }

        return rez;
    }
};

int main()
{
    Solution solution;

    // vector<int> nums = {9, 12, 5, 10, 14, 3, 10};
    vector<int> nums = {-3, 4, 3, 2};
    // int pivot = 10;
    int pivot = 2;

    vector<int> rez = solution.pivotArray(nums, pivot);

    for (auto &&i : rez)
    {
        cout << i << " ";
    }

    return 0;
}