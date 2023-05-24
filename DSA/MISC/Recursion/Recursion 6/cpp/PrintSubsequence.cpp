#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void printSubsequence(int index, vector<int> &arr, int nums[], int n) {
    if (index == n) {
        for (auto item: arr) {
            cout << item << " ";
        }
        cout << "\n";
        return;
    }

    arr.push_back(nums[index]);
    printSubsequence(index + 1, arr, nums, n);
    arr.pop_back();
    printSubsequence(index + 1, arr, nums, n);
}

int main() {
    int nums[] = {3, 1, 2, 4};
    vector<int> arr;
    printSubsequence(0, arr, nums, 4);
}