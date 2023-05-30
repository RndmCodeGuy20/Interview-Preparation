//
// Created by SHANTANU on 30-05-2023.
//
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

bool SubSeqSumK(int index, int target, int nums[]) {
    if (index == 0) return (nums[index] == target);
    if (target == 0) return true;

    bool notTake = SubSeqSumK(index - 1, target, nums);
    bool take = false;
    if (nums[index] <= target) take = SubSeqSumK(index - 1, target - nums[index], nums);

    return take || notTake;
}

bool SubSeqSumKMemoization(int index, int target, int nums[], vector <vector<int>> &dp) {
    if (index == 0) return (nums[index] == target);
    if (target == 0) return true;

    if (dp[index][target] != -1) return dp[index][target];

    bool notTake = SubSeqSumK(index - 1, target, nums);
    bool take = false;
    if (nums[index] <= target) take = SubSeqSumK(index - 1, target - nums[index], nums);

    return dp[index][target] = take | notTake;
}

int main() {

    int nums[] = {2, 3, 1, 1};
    int target = 8;

    cout << SubSeqSumK(3, target, nums) << endl;
    
    vector <vector<int>> dp(4, vector<int>(target + 1, -1));
    cout << SubSeqSumKMemoization(3, target, nums, dp);

    return 0;
}