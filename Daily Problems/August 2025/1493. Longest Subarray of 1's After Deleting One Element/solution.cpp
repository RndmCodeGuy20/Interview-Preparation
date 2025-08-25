#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int longestSubarray(vector<int> &nums)
    {
        int rez = 0;
        int left = 0;
        int count0 = 0;

        for (int right = 0; right < nums.size(); right++)
        {
            if (nums[right] == 0)
            {
                count0++;
            }

            while (count0 > 1)
            {
                if (nums[left] == 0)
                {
                    count0--;
                }
                left++;
            }

            rez = max(rez, right - left + 1);
        }

        return rez;
    }
};

int main()
{
    Solution solution;
    return 0;
}