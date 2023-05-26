//
// Created by SHANTANU on 25-05-2023.
//
#include <bits/stdc++.h>

using namespace std;

int MaxSumMemoization(int index, vector<int> &dp, vector<int> arr) {
    if (index == 0) return arr[index];
    if (index < 0) return 0;

    if (dp[index] != -1) return dp[index];

    int pick = arr[index] + MaxSumMemoization(index - 2, dp, arr);
    int notPick = MaxSumMemoization(index - 1, dp, arr);

    dp[index] = max(pick, notPick);

    return dp[index];
}

//int MaxSumTabular(int index, vector<int> &dp, vector<int> arr) {
//    dp[0] = arr[0];
//    int neg = 0;
//
//    for (int i = 0; i < index; i++) {
//
//    }
//}

int main() {
    vector<int> dp(4, -1);
    vector<int> arr = {9, 4, 1, 3};

    cout << MaxSumMemoization(3, dp, arr);

    for (auto item: dp) {
        cout << item << " ";
    }

    return 0;
}