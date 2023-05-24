//
// Created by SHANTANU on 24-05-2023.
//
#include <bits/stdc++.h>

using namespace std;

int FrogJumpMemoization(int height[], int index, vector<int> &dp) {
    if (index == 0) {
        return 0;
    }
    if (dp[index] != -1) {
        return dp[index];
    }
    int left = FrogJumpMemoization(height, index - 1, dp) + abs(height[index] - height[index - 1]);
    int right = 999;
    if (index > 0) {
        right = FrogJumpMemoization(height, index - 2, dp) + abs(height[index] - height[index - 2]);
    }

    dp[index] = min(left, right);
    return dp[index];
}

int main() {
    int height[] = {10, 50, 10};
    int index = 2;
    vector<int> dp(index + 1, -1);

    cout << FrogJumpMemoization(height, index, dp);

    return 0;
}