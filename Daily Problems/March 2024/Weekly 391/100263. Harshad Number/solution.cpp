#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int sumOfTheDigitsOfHarshadNumber(int x)
    {
        int digSum = 0;
        int temp = x;

        while (x > 0)
        {
            digSum += x % 10;
            x /= 10;
        }

        cout << digSum << endl;

        return temp % digSum == 0 ? digSum : -1;
    }
};

int main()
{
    Solution s;
    cout << s.sumOfTheDigitsOfHarshadNumber(23) << endl;
    return 0;
}