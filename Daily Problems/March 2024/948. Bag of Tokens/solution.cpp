//
// Created by SHANTANU on 2024-03-04.
//
#include <bits/stdc++.h>
//#include "../"

using namespace std;

class Solution {
public:
    int bagOfTokensScore(vector<int> &tokens, int power) {
        int score = 0, maxScore = 0;
        int n = tokens.size();
        int l = 0, r = n - 1;
        sort(tokens.begin(), tokens.end());

        while (l <= r) {
            if (power >= tokens[l]) {
                score++;
                power -= tokens[l];
                maxScore = max(maxScore, score);
                l++;
            } else if (score > 0) {
                power += tokens[r];
                score--;
                r--;
            } else {
                break;
            }
        }

        return maxScore;
    }
};

int main() {
    Solution solution;
    vector<int> tokens = {100, 200, 300, 400};
    cout << solution.bagOfTokensScore(tokens, 200);

    return 0;
}
