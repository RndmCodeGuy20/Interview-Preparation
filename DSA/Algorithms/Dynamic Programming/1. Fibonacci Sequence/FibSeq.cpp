//
// Created by SHANTANU on 23-05-2023.
//

#include <bits/stdc++.h>

using namespace std;

int FibonacciNumberMemoization(int n, vector<int> &dp) {
    if (n <= 1) {
        return n;
    }

    if (dp[n] != -1) {
        return dp[n];
    }

    dp[n] = FibonacciNumberMemoization(n - 1, dp) + FibonacciNumberMemoization(n - 2, dp);
    return dp[n];
}

void FibonacciNumberTabulation(int n, vector<int> &dp) {
    dp[0] = 0;
    dp[1] = 1;

    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    cout << dp[n] << endl;
}

int main() {
    int n;
    cin >> n;

    vector<int> dpMemo(n + 1, -1);

    cout << FibonacciNumberMemoization(n, dpMemo) << endl;

    vector<int> dpTab(n + 1, -1);
    FibonacciNumberTabulation(n, dpTab);
}