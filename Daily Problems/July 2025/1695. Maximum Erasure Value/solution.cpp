#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maximumUniqueSubarray(vector<int> &nums)
    {
        int currSum = nums[0], maxSum = 0;
        unordered_set<int> uniqueSet = {nums[0]};
        int L = 0, R = 1;

        while (L < R && R < nums.size())
        {
            if (uniqueSet.find(nums[R]) == uniqueSet.end())
            {
                // cout << "not in set " << nums[R] << endl;
                uniqueSet.insert(nums[R]);
                currSum += nums[R];
                R++;
            }
            else
            {
                // cout << "in set " << nums[R] << endl;
                uniqueSet.erase(nums[L]);
                currSum -= nums[L];
                L++;
            }
            // cout << "current sum " << currSum << endl;
            maxSum = max(maxSum, currSum);
        }

        return maxSum;
    }
};

int main()
{
    Solution solution;
    vector<int> nums1 = {4, 2, 4, 5, 6};
    cout << "max sum: " << solution.maximumUniqueSubarray(nums1) << endl;
    return 0;
}