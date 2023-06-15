//
// Created by SHANTANU on 15-06-2023.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int binarySearch(vector<int> &nums, int target) {
        int low = 0, high = nums.size() - 1;

        if (low == high) {
            return nums[low] == target ? 0 : -1;
        }

        while (low <= high) {
            int mid = (low + high) / 2;

            if (nums[mid] > target) high = mid;
            else if (nums[mid] < target) low = mid + 1;
            else return mid;
        }

        return -1;
    }
};

int main() {
    vector<int> nums = {5};
    int target = -1;

    Solution solution;
    cout << solution.binarySearch(nums, target);

    return 0;
}