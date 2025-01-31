//
// Created by SHANTANU on 30-03-2024.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int minimumSubarrayLength(vector<int> &nums, int k) {
        int n = nums.size();
        int minSize = INT_MAX;
        int start = -1, end = -1;

        for (int i = 0; i < n; ++i) {
            int currOr = 0;
            for (int j = i; j < n; ++j) {
                currOr |= nums[j];
                if (currOr >= k && j - i + 1 < minSize) {
                    minSize = j - i + 1;
                    start = i;
                    end = j;
                }
            }
        }

        return end - start;
    }
};

int main() {
    Solution s;
    vector<int> nums = {1, 2};
    int k = 0;
    cout << s.minimumSubarrayLength(nums, k);
}