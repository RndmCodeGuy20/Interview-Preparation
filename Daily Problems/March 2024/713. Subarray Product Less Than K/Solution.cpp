//
// Created by SHANTANU on 27-03-2024.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
private:
    int mulSubArray(vector<int> &nums, int left, int right) {
        int res = 1;
        for (int i = left; i <= right; ++i) {
            res *= nums[i];
        }

        return res;
    }

public:
    int numSubarrayProductLessThanK(vector<int> &nums, int k) {
        int rez = 0;
        if (k <= 1) return 0;

//        for (int left = 0; left < nums.size(); ++left) {
//            int mulRes = 1;
//            for (int right = left; right < nums.size(); ++right) {
//                cout << mulRes << endl;
//                mulRes *= nums[right];
//                if (mulRes < k) rez++;
//            }
//        }

        for (int num: nums) num < k ? rez++ : NULL;


        int left = 0, right = 0;

        while (right < nums.size()) {
            int mulRes = 1;
            if (left == right) mulRes = nums[left];
            else mulRes = mulSubArray(nums, left, right);
            cout << mulRes << endl;

            if (mulRes < k) {
                right++;
                rez++;
            } else {
                left++;
                right = left;
            }
        }

        return rez;
    }
};

int main() {
    Solution solution;

    vector<int> nums = {1, 2, 3};
    cout << solution.numSubarrayProductLessThanK(nums, 100) << endl;

    return 0;
}