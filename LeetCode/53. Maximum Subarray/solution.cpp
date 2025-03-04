#include <bits/stdc++.h>
using namespace std;

struct MaxSubArrayInfo
{
    int maxSum;
    int startIdx;
    int endIdx;
} maxSubArrayInfo;

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int maxSum = INT_MIN;
        int sum = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            maxSum = max(maxSum, sum);
            sum = max(sum, 0);
        }

        return maxSum;
    }
};

int main()
{
    Solution solution;
    // vector<int> nums = {-2, -3, 4, -1, -2, 1, 5, -3};
    // vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    // vector<int> nums = {1};
    vector<int> nums = {5, 4, -1, 7, 8};

    cout << "maximum sum: " << solution.maxSubArray(nums) << endl;

    return 0;
}