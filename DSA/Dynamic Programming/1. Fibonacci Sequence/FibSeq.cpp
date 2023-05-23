//
// Created by SHANTANU on 23-05-2023.
//

#include <bits/stdc++.h>
using namespace std;

int FibonacciNumber(int n, vector<int> &dp){
    if (n <= 1){
        return n;
    }

    if (dp[n] != -1){
        return dp[n];
    }

    dp[n] = FibonacciNumber(n-1, dp) + FibonacciNumber(n-2, dp);
    return dp[n];
}

int main(){
    int n;
    cin >> n;

    vector<int> dp(n+1, -1);

    cout << FibonacciNumber(n, dp) << endl;
}