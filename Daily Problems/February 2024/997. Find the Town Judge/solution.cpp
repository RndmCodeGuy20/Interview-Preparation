
//
// Created by SHANTANU on 2024-02-22.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int findJudge(int n, vector<vector<int>> &trust) {
        map<int, int> incoming;
        map<int, int> outgoing;

        for (vector<int> t: trust) {
            outgoing[t[0]]++;
            incoming[t[1]]++;
        }

        for (int i = 1; i < n + 1; ++i) {
            if (incoming[i] == (n - 1) && outgoing[i] == 0) return i;
        }

        return -1;
    }
};

int main() {
    Solution solution;
    vector<vector<int>> trust = {{1, 3},
                                 {2, 3},
                                 {3, 1}};

    cout << solution.findJudge(3, trust);

    return 0;
}
