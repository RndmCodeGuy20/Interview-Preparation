#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    bool checkPowerHelperBrute(int power, int n)
    {
        if (n == 0)
            return true;

        if (n < pow(3, power))
            return false;

        bool addPower = checkPowerHelperBrute(power + 1, n - pow(3, power));
        bool skipPower = checkPowerHelperBrute(power + 1, n);

        return addPower || skipPower;
    }

    bool checkPowerHelperBetter(int n)
    {
        int power = 0;

        while (pow(3, power) <= n)
        {
            power++;
        }

        while (n > 0)
        {
            if (n >= pow(3, power))
                n -= pow(3, power);

            if (n >= pow(3, power))
                return false;

            power--;
        }

        return true;
    }

public:
    bool checkPowersOfThree(int n)
    {
        return checkPowerHelperBetter(n);
        // return checkPowerHelperBrute(0, n);
    }
};

int main()
{
    Solution solution;
    vector<int> nums = {12, 91, 21};

    for (auto &&n : nums)
    {
        cout << n << " solution :" << solution.checkPowersOfThree(n) << endl;
    }

    return 0;
}