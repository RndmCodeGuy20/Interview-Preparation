#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    int longestPrefixSum(vector<int> nums)
    {
        int sum = nums[0];

        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] == nums[i - 1] + 1)
            {
                sum += nums[i];
            }
            else
            {
                return sum;
            }
        }

        return sum;
    }

    int searchForMaxPrefix(vector<int> nums, int maxSum)
    {
        // search the maxPrefixSum in array, if it is not present, check for maxPrefixSum+1 and update masPrefixSum
        for (auto &&num : nums)
        {
            if (num == maxSum)
            {
                return searchForMaxPrefix(nums, maxSum + 1);
            }
        }

        return maxSum;
    }

public:
    int missingInteger(vector<int> &nums)
    {
        int maxPrefixSum = longestPrefixSum(nums);

        return searchForMaxPrefix(nums, maxPrefixSum);
    }
};

int main()
{
    Solution solution;

    // vector<int> nums = {1, 2, 3, 5, 2};
    // vector<int> nums = {3, 4, 5, 1, 12, 14, 13};
    // vector<int> nums = {6, 3, 1, 4, 5, 1, 12, 14, 13};
    vector<int> nums = {5, 4, 3, 2, 1};

    int minGreaterThanMaxSum = solution.missingInteger(nums);

    cout << "result: " << minGreaterThanMaxSum << endl;

    return 0;
}