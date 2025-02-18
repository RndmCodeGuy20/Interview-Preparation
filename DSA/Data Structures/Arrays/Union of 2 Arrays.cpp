#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> arrayOperations(vector<int> nums1, vector<int> nums2)
    {
        vector<int> intersection;
        vector<int> unionRez;
        vector<int> distinctsInNums1;
        vector<int> distinctsInNums2;

        int N = nums1.size();
        int M = nums2.size();
        int i = 0;
        int j = 0;

        while (i < N && j < M)
        {
            if (nums1[i] == nums2[j])
            {
                unionRez.push_back(nums1[i]);
                i++;
                j++;
            }
            else if (nums1[i] < nums2[j])
            {
                // distinctsInNums1.push_back(nums1[i]);
                if (unionRez.back() != nums1[i])
                {
                    unionRez.push_back(nums1[i]);
                }
                i++;
            }
            else
            {
                // distinctsInNums2.push_back(nums2[j]);
                if (unionRez.back() != nums2[i])
                {
                    unionRez.push_back(nums2[i]);
                }
                j++;
            }
        }

        // union = intersection + distincts in 1 + distincts in 2

        return unionRez;
    }
};

int main()
{
    Solution solution;
    vector<int> nums1 = {1, 2, 3, 4, 5};
    vector<int> nums2 = {2, 3, 4, 4, 5};

    vector<int> rez = solution.arrayOperations(nums1, nums2);

    for (auto &&i : rez)
    {
        cout << i << ", ";
    }

    return 0;
}