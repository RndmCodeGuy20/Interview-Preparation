
//
// Created by SHANTANU on 2024-02-17.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int furthestBuilding(vector<int> &heights, int bricks, int ladders) {
        int rez = 0;

        for (int i = 0; i < heights.size() - 1; ++i) {
            if (heights[i] < heights[i + 1]) {
                if (abs(heights[i] - heights[i + 1]) > (bricks / 2) && ladders > 0) {
                    ladders--;
                    rez++;
                } else {
                    bricks -= abs(heights[i] - heights[i + 1]);
                    rez++;
                }
            }
        }

        return rez;
    }
};

int main() {
    Solution solution;
    vector<int> heights = {4, 12, 2, 7, 3, 18, 20, 3, 19};
    cout << solution.furthestBuilding(heights, 10, 2);

    return 0;
}
