#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        int N = digits.size();

        // if ((digits[N - 1] + 1) < 10)
        // {
        //     digits[N - 1] += 1;
        //     return digits;
        // }

        int carry = 1;
        for (int i = N - 1; i >= 0; i--)
        {
            if ((digits[i] + carry) < 10)
            {
                digits[i] += carry;
                //? carry = 0;  not necessary
                return digits;
            }
            else
            {
                digits[i] = 0;
            }
        }

        digits.insert(digits.begin(), 1);
        return digits;
    }
};

int main()
{
    Solution solution;
    // vector<int> digits = {1, 2, 4};
    // vector<int> digits = {1, 2, 9};
    // vector<int> digits = {9};
    // vector<int> digits = {9, 9};
    vector<int> digits = {1, 0};

    vector<int> result = solution.plusOne(digits);

    for (int digit : digits)
    {
        cout << digit << " ";
    }

    return 0;
}