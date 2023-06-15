//
// Created by SHANTANU on 15-06-2023.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int> &nums, int target) {
        int low = 0, high = nums.size() - 1;

        if (target > nums[high]) {
            return high + 1;
        }

        if (target < nums[low]) {
            return 0;
        }

        if (low == high) {
            return nums[low] == target ? 0 : -1;
        }

        while (low != high) {
            int mid = (low + high) / 2;

            if (nums[mid] >= target) high = mid;
            else low = mid + 1;
        }

        return high;
    }
};

int main() {
    vector<int> nums = {1};
    int target = 0;

    Solution solution;

    cout << solution.searchInsert(nums, target);

    return 0;
}