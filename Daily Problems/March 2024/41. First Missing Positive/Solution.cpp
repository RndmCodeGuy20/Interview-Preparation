//
// Created by SHANTANU on 26-03-2024.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int firstMissingPositive(vector<int> &nums) {
        // O(N) TC with O(N) SC
//        map<int, int> mpp;
//        for (int i: nums) {
//            mpp[i]++;
//        }
//
//        for (int i = 1; i <= nums.size(); i++) {
//            if (!mpp[i]) return i;
//        }
//
//        return -1;

        // O(nlogn) TC with O(1) SC
//        sort(nums.begin(), nums.end());
//
//        for (int i = 0; i < nums.size() - 1; i++) {
//            if (nums[i] > 0 && (nums[i + 1] - nums[i]) > 1) return i + 1;
//        }

        int n = nums.size();
        for (int &num: nums) {
            if (num < 0) num = 0;
        }

        for (int i = 0; i < n; ++i) {
            int val = abs(nums[i]);

            if (val >= 1 && val <= n) {
                if (nums[val - 1] > 0) nums[val - 1] *= -1;
                else if (nums[val - 1] == 0) nums[val - 1] = -1 * (n + 1);
            }
        }

        for (int i = 1; i <= n; ++i) {
            if (nums[i - 1] >= 0) return i;
        }


        return n + 1;
    }
};


int main() {
    Solution solution;
    vector<int> nums = {1, 3, 0};
    cout << solution.firstMissingPositive(nums) << endl;
    return 0;
}