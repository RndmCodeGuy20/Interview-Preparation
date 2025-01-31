
//
// Created by SHANTANU on 2024-03-05.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int minimumLength(string s) {
        int left = 0, right = s.size() - 1;
        char lV, rV;

        while (left < right) {
            lV = s[left];
            rV = s[right];
            if (lV == rV) {
                left++;
                right--;
                while (lV == s[left]) {
                    if (left > s.size()) return 0;
                    else left++;
                }
                while (rV == s[right]) right--;
            } else {
                return right - left + 1;
            }
        }

        if (left == right) return 1;

        return 0;
    }
};

int main() {
    Solution solution;

    cout << solution.minimumLength("bbbbbbbbbbbbbbbbbbbbbbbbbb") << endl;

    return 0;
}
