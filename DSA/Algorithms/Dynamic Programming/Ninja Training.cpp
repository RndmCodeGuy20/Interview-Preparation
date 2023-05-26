//
// Created by SHANTANU on 25-05-2023.
//
#include <bits/stdc++.h>

using namespace std;

int NinjaTrainingRecursive(int dayIndex, int prevDayIndex, vector <vector<int>> tasks) {
    if (dayIndex == 0) {
        int maxMerit = 0;

        for (int i = 0; i < 3; i++) {
            if (i != prevDayIndex) {
                maxMerit = max(maxMerit, tasks[dayIndex][i]);
            }
        }

        return maxMerit;
    }

    int maxMerit = 0;
    for (int i = 0; i < 3; i++) {
        if (prevDayIndex != i) {
            int points = tasks[dayIndex][i] + NinjaTrainingRecursive(dayIndex - 1, i, tasks);
            maxMerit = max(maxMerit, points);
        }
    }

    return maxMerit;
}

int NinjaTrainingMemoization(int dayIndex, int prevDayIndex, vector <vector<int>> tasks, vector <vector<int>> &dp) {
    if (dayIndex == 0) {
        int maxMerit = 0;

        for (int i = 0; i < 3; i++) {
            if (i != prevDayIndex) {
                maxMerit = max(maxMerit, tasks[dayIndex][i]);
//                dp[dayIndex][i] = maxMerit;
            }
        }

        return maxMerit;
    }

    if (dp[dayIndex][prevDayIndex] != -1) {
        return dp[dayIndex][prevDayIndex];
    }

    int maxMerit = 0;
    for (int i = 0; i < 3; i++) {
        if (prevDayIndex != i) {
            int points = tasks[dayIndex][i] + NinjaTrainingMemoization(dayIndex - 1, i, tasks, dp);
            maxMerit = max(maxMerit, points);
            dp[dayIndex][i] = maxMerit;
        }
    }

    return maxMerit;
}

int main() {

    vector <vector<int>> tasks = {{100, 50,  1},
                                  {11,  100, 25}};

    cout << NinjaTrainingRecursive(1, 3, tasks) << endl;

    vector <vector<int>> dp(2, vector<int>(4, -1));

    cout << NinjaTrainingMemoization(1, 3, tasks, dp) << endl;

    for (auto item: dp) {
        for (auto item2: item) {
            cout << item2 << " ";
        }
    }

    return 0;
}