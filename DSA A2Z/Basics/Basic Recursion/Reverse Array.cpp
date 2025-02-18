//
// Created by SHANTANU on 17-02-2025.
//
#include <bits/stdc++.h>
using namespace std;

class Solution {
private:

public:
  void reverseArray(vector<int> nums, int index, vector<int>& rez){
        if (index == nums.size() - 1){
          rez.push_back(nums[index]);
          return;
        }

        reverseArray(nums, index + 1, rez);
        rez.push_back(nums[index]);
        return;
    }
};

int main(){
    Solution solution;

    vector<int> nums = {1,2,3,4,5};
    vector<int> rez;

    solution.reverseArray(nums, 0, rez);

    for(int i = 0; i < rez.size(); i++){
      cout << rez[i] << " ";
      }

    return 0;
}