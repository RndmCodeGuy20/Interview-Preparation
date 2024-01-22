/**
 * Created by SHANTANU on 06-12-2023.
 * Topic - 
*/
#include <bits/stdc++.h>
#include <iostream>


using namespace std;

class Solution {
public:
    int totalMoney(int n) {
        int sum = 0;
        int dayMoney = 0, weekMoney = 0;
        for (int i = 1; i < n + 1; ++i) {
            if (i % 7 == 1) {
                dayMoney = weekMoney + 1;
                weekMoney++;
            } else {
                dayMoney++;
            }
            sum += dayMoney;
            cout << dayMoney << " ";
        }

        return sum;
    }
};

int main() {
    Solution solution;
    cout << solution.totalMoney(10);

    return 0;
}