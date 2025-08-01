#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isZeroArray(vector<int> &nums, vector<vector<int>> &queries)
    {
        vector<int> differenceVector(nums.size() + 1, 0);
        for (auto &&query : queries)
        {
            differenceVector[query[0]] += 1;
            differenceVector[query[1] + 1] -= 1;
        }

        vector<int> preSumVector;
        int preSum = 0;

        for (auto &&diff : differenceVector)
        {
            preSum += diff;
            if (preSum > 0)
            {
                return false;
            }
            // preSumVector.push_back(preSum);
        }

        // for (int i = 0; i < nums.size(); i++)
        // {
        //     if (preSumVector[i] < nums[i])
        //         return false;
        // }

        return true;
    }
};

int main()
{
    Solution solution;

    // Test case 1: We can convert all elements to zero
    vector<int> nums1 = {1, 2, 3, 1};
    vector<vector<int>> queries1 = {{0, 1}, {1, 2}, {0, 3}};
    cout << "Test case 1: " << (solution.isZeroArray(nums1, queries1) ? "true" : "false") << endl;
    // Expected: true (after applying all queries, array becomes [0,0,0,0])

    // Test case 2: We cannot convert all elements to zero
    vector<int> nums2 = {2, 3, 1, 4};
    vector<vector<int>> queries2 = {{0, 1}, {1, 2}};
    cout << "Test case 2: " << (solution.isZeroArray(nums2, queries2) ? "true" : "false") << endl;
    // Expected: false (after applying all queries, array becomes [1,1,0,4])

    // Test case 3: Empty array
    vector<int> nums3 = {};
    vector<vector<int>> queries3 = {};
    cout << "Test case 3: " << (solution.isZeroArray(nums3, queries3) ? "true" : "false") << endl;
    // Expected: true (empty array has no non-zero elements)

    // Test case 4: Large numbers requiring multiple decrements
    vector<int> nums4 = {5, 6, 7};
    vector<vector<int>> queries4 = {{0, 2}, {0, 2}, {0, 2}, {0, 2}, {0, 2}, {0, 2}, {0, 2}};
    cout << "Test case 4: " << (solution.isZeroArray(nums4, queries4) ? "true" : "false") << endl;
    // Expected: true (after applying all 7 queries, array becomes [0,0,0])

    // Test case 5: Array with elements already zero
    vector<int> nums5 = {0, 0, 0};
    vector<vector<int>> queries5 = {{0, 1}};
    cout << "Test case 5: " << (solution.isZeroArray(nums5, queries5) ? "true" : "false") << endl;
    // Expected: true (array already has all zeros)

    return 0;
}