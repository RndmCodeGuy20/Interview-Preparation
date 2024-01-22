//
// Created by SHANTANU on 01-07-2023.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
private:
    void cookieDistribution(int index, vector<int> temp, vector<int> cookies, int k, int &ans) {
        if (index == cookies.size()) {
            int maxCookies = INT_MIN;
            for (int i = 0; i < k; ++i) {
                maxCookies = max(maxCookies, temp[i]);
            }
            ans = min(ans, maxCookies);
            return;
        }

        for (int i = 0; i < k; ++i) {
            temp[i] += cookies[index];
            cookieDistribution(index + 1, temp, cookies, k, ans);
            temp[i] -= cookies[index];
        }
    }

public:
    int distributeCookies(vector<int> &cookies, int k) {
        int ans = INT_MAX;
        vector<int> temp(k, 0);
        this->cookieDistribution(0, temp, cookies, k, ans);
        return ans;
    }
};

int main() {
    vector<int> cookies = {6, 1, 3, 2, 2, 4, 1, 2};
    int k = 3;
    Solution solution;

    int ans = solution.distributeCookies(cookies, k);
    cout << ans << endl;

    return 0;
}