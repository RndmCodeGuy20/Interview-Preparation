#include <bits/stdc++.h>
using namespace std;

class Solution {
  private:
    bool checkParity(int num1, int num2) {
        return (num1 % 2 == 0 && num2 % 2 == 0) || (num1 % 2 != 0 && num2 % 2 != 0);
    }
public:
    bool isArraySpecial(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] == nums[j] || checkParity(nums[i], nums[j])) {
                    return true;
                }
            }
        }
        return false;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 2, 3, 4, 5};
    cout << solution.isArraySpecial(nums) << endl;

    return 0;
}