//
// Created by SHANTANU on 2024-02-13.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string firstPalindrome(vector<string> &words) {
        for (auto &word: words) {
            string reversed = word;
            reverse(reversed.begin(), reversed.end());
            if (reversed == word) {
                return word;
            }
        }
        return "";
    }
};

int main() {
    Solution solution;
    vector<string> words = {"abc", "def", "aba"};
    cout << solution.firstPalindrome(words) << endl;

    return 0;
}
