
//
// Created by SHANTANU on 2024-02-16.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int> &arr, int k) {
        map<int, int> numCounts;

        for (int num: arr) {
            numCounts[num]++;
        }

        vector<int> freq;
        for (pair<int, int> counts: numCounts) {
            freq.push_back(counts.second);
        }

        sort(freq.begin(), freq.end());

        for (int i = 0; i < freq.size(); ++i) {
            if (k > freq[i]) {
                k -= freq[i];
                freq[i] = 0;
            } else {
                freq[i] -= k;
                k = 0;
            }
        }
        int count = 0;
        for (int i: freq) {
            if (i != 0)count++;
        }

        return count;
    }
};

int main() {
    Solution solution;
    vector<int> arr = {4, 3, 1, 1, 3, 3, 2};
    cout << solution.findLeastNumOfUniqueInts(arr, 3);

    return 0;
}
