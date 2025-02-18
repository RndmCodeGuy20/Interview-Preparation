#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void filterOsInArray(vector<int> &nums)
    {
        int j = -1;
        int SIZE = nums.size();

        // find the first 0 in the array
        for (int i = 0; i < SIZE; i++)
        {
            if (nums[i] == 0)
            {
                j = i;
                break;
            }
        }

        if (j == -1)
            return;

        for (int i = j + 1; i < SIZE; i++)
        {
            if (nums[i] != 0)
            {
                swap(nums[i], nums[j]);
                j++;
            }
        }

        return;
    }
};

int main()
{
    Solution solution;
    vector<int> nums = {1, 2, 0, 4, 0, 1, 0, 0};

    solution.filterOsInArray(nums);

    for (auto &&i : nums)
    {
        cout << i << ", ";
    }

    return 0;
}