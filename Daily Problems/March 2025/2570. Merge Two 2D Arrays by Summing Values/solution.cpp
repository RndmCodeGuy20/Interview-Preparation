#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> mergeArrays(vector<vector<int>> &nums1, vector<vector<int>> &nums2)
    {
        int ptr1 = 0, ptr2 = 0;
        vector<vector<int>> rez;

        while (ptr1 < nums1.size() && ptr2 < nums2.size())
        {
            if (nums1[ptr1][0] == nums2[ptr2][0])
            {
                rez.push_back({nums1[ptr1][0], nums1[ptr1][1] + nums2[ptr2][1]});
                ptr1++;
                ptr2++;
            }
            else if (nums1[ptr1][0] < nums2[ptr2][0])
            {
                rez.push_back({nums1[ptr1][0], nums1[ptr1][1]});
                ptr1++;
            }
            else
            {
                rez.push_back({nums2[ptr2][0], nums2[ptr2][1]});
                ptr2++;
            }
        }

        if (ptr1 < nums1.size())
        {
            rez.insert(rez.end(), nums1.begin() + ptr1, nums1.end());
        }
        else
        {
            rez.insert(rez.end(), nums2.begin() + ptr2, nums2.end());
        }

        return rez;
    }
};

int main()
{
    Solution solution;
    // vector<vector<int>> nums1 = {{1, 2},
    //                              {2, 3},
    //                              {4, 5}};
    // vector<vector<int>>
    //     nums2 = {{1, 4},
    //              {3, 2},
    //              {4, 1}};

    vector<vector<int>> nums1 = {{2, 4},
                                 {3, 6},
                                 {5, 5}};
    vector<vector<int>>
        nums2 = {{1, 3},
                 {8, 3}};

    vector<vector<int>>
        rez = solution.mergeArrays(nums1, nums2);

    for (auto &&n : rez)
    {
        cout << n[0] << " " << n[1] << endl;
    }

    return 0;
}