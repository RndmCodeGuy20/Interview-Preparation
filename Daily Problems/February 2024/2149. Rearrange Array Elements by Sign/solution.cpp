
//
// Created by SHANTANU on 2024-02-14.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int> &nums) {
//        vector<int> posArr;
//        vector<int> negArr;
//
//        for (int num: nums) {
//            if (num > 0) {
//                posArr.push_back(num);
//            } else {
//                negArr.push_back(num);
//            }
//        }

        vector<int> res(nums.size(), 0);
        int pos = 0;
        int neg = 1;

        for (int num: nums) {
            if (num > 0) {
                res[pos] = num;
                pos += 2;
            } else {
                res[neg] = num;
                neg += 2;
            }
        }

        return res;
    }
};

int main() {
    Solution solution;
    vector<int> in = {3, 1, -2, -5, 2, -4};

    vector<int> res = solution.rearrangeArray(in);

    for (int num: res) {
        cout << num << " ";
    }

    return 0;
}
