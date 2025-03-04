#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> applyOperations(vector<int> &nums)
    {
        vector<int> rez;

        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] == nums[i + 1])
            {
                nums[i] *= 2;
                nums[i + 1] = 0;
            }
        }

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != 0)
                rez.push_back(nums[i]);
        }

        int ZEROES = nums.size() - rez.size();
        vector<int> zeroes(ZEROES, 0);
        rez.insert(rez.end(), zeroes.begin(), zeroes.end());

        return rez;
    }
};

int main()
{
    Solution solution;

    // vector<int> nums = {1, 2, 2, 1, 1, 0};
    vector<int> nums = {0, 1};
    vector<int> rez = solution.applyOperations(nums);

    for (auto &&i : rez)
    {
        cout << i << " ";
    }

    return 0;
}