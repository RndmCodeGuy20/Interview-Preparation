
//
// Created by SHANTANU on 2024-03-02.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int> &nums) {
//        if (nums[0] == 0) {
//            vector<int> rez;
//            for (int num: nums) {
//                rez.push_back(num * num);
//            }
//
//            return rez;
//        }
//
//        vector<int> rez;
//        for (int num: nums) {
//            rez.push_back(num * num);
//        }
//
//        sort(rez.begin(), rez.end());
//
//        return rez;
        int n = nums.size();
        int left = 0, right = n - 1;
        int itr = n - 1;
        vector<int> rez(n, 0);

        while (left <= right) {
            if (abs(nums[left]) > abs(nums[right])) {
                rez[itr--] = pow(nums[left], 2);
                left++;
            } else {
                rez[itr--] = pow(nums[right], 2);
                right--;
            }
        }

        return rez;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {-4, -1, 0, 3, 10};
    for (int num: solution.sortedSquares(nums)) {
        cout << num << " ";
    }

    return 0;
}
