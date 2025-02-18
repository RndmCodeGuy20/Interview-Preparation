#include <bits/stdc++.h>
using namespace std;

class Solution
{
    static int findBreakPoint(const vector<int>& nums)
    {
        int L = nums.size();

        for (int i = 0; i < L - 1; i++)
            if (nums[i] > nums[i + 1]) return i;

        return 0;
    }

public:
    bool check(vector<int>& nums)
    {
        int L = nums.size();
        if (L == 1) return true;

        int breakPoint = findBreakPoint(nums);

        cout << "break point: " << breakPoint << endl;

        int i = breakPoint + 1;
        int MAX = L;
        while (L > 1)
        {
            cout << nums[i % MAX] << " " << nums[(i + 1) % MAX] << endl;
            if (nums[i % MAX] > nums[(i + 1) % MAX])
            {
                return false;
            }
            i++;
            L--;
        }

        return true;
    }
};

int main()
{
    Solution solution;
    // vector<int> nums = {3, 4, 5, 1, 2};
    vector<int> nums = {1, 1};

    bool isRotatedSorted = solution.check(nums);

    cout << "is array sorted and rotated? " << isRotatedSorted << endl;

    return 0;
}
