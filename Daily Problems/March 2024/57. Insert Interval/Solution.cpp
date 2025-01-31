//
// Created by SHANTANU on 25-03-2024.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>> &intervals, vector<int> &newInterval) {
        if (intervals.empty()) {
            intervals.push_back(newInterval);
            return intervals;
        }
//        // add the `newInternal` to the `intervals` list
//        for (vector<int> &vc: intervals) {
//            if (vc[1] > newInterval[0]) {
//                vc[1] = max(newInterval[1], vc[1]);
//                break;
//            }
//        }
//
//        vector<vector<int>> rez;
//        rez.push_back(intervals[0]);
//        int j = 0;
//        // merge all the overlapping intervals
//        for (int i = 1; i < intervals.size(); ++i) {
//            if (rez[j][1] >= intervals[i][0]) {
//                rez[j][1] = max(intervals[i][1], rez[j][1]);
//            } else {
//                rez.push_back(intervals[i]);
//                j++;
//            }
//        }
//
//        return rez;

        vector<vector<int>> rez;

        for (vector<int> vc: intervals) {
            if (newInterval[1] < vc[0]) {
                rez.push_back(newInterval);
                int i = 0;
                while (i < intervals.size()) {
                    rez.push_back(intervals[i]);
                    i++;
                }
                return rez;
            } else if (vc[1] < newInterval[0]) {
                rez.push_back(vc);
            } else {
                newInterval[0] = min(newInterval[0], vc[0]);
                newInterval[1] = max(newInterval[1], vc[1]);
            }
        }

        rez.push_back(newInterval);
        return rez;
    }
};

int main() {
    Solution solution;
    vector<vector<int>> intervals = {{1, 3},
                                     {4, 8}};
    vector<int> newInterval = {9, 18};
    vector<vector<int>> ans = solution.insert(intervals, newInterval);
    for (const auto &i: ans) {
        for (auto j: i) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}