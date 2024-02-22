
//
// Created by SHANTANU on 2024-02-21.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int count = 0;
        while (left != right) {
            left >>= 1;
            right >>= 1;
            count++;
        }

        return left <<= count;
    }
};

int main() {
    Solution solution;
    cout << solution.rangeBitwiseAnd(5, 7);

    return 0;
}
