//
// Created by SHANTANU on 21-05-2023.
//

#include <bits/stdc++.h>

using namespace std;

void SubsequenceWSumK(int index, vector<int> &arr, int nums[], int n, int k) {
    if (index == n) {
        int sum = 0;
        for (auto item: arr) {
            sum += item;
        }

        if (sum == k) {
            for (auto item: arr) {
                cout << item << " ";
            }
            cout << "\n";
            return;
        }
        return;
    }

    arr.push_back(nums[index]);
    SubsequenceWSumK(index + 1, arr, nums, n, k);
    arr.pop_back();
    SubsequenceWSumK(index + 1, arr, nums, n, k);
}

int main() {
    int nums[] = {3, 1, 2};
    vector<int> arr;
    int n = 3;
    int k = 3;
    SubsequenceWSumK(0, arr, nums, n, k);
}
