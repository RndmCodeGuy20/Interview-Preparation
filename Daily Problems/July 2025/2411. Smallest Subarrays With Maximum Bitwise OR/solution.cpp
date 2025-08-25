#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    void updateSetters(int num, int index, vector<int> &setters)
    {
        int position = 0;
        while (num > 0)
        {
            int bitValue = num % 2;
            num /= 2;
            if (bitValue == 1)
            {
                setters[position] = index;
            }
            position++;
        }
    }

public:
    vector<int> smallestSubarrays(vector<int> &nums)
    {
        vector<int> rez;
        int maxOR;
        vector<int> setters(32, -1);

        for (int i = nums.size() - 1; i >= 0; i--)
        {
            maxOR |= nums[i];
            updateSetters(nums[i], i, setters);
            int nearestSetBit = *max_element(setters.begin(), setters.end());
            rez.push_back(nearestSetBit - i + 1);
        }

        return rez;
    }
};

int main()
{
    Solution solution;
    return 0;
}