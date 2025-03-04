#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    void padBinaryStringLeft(string &binary, int padding)
    {
        if (padding == 0)
            return;

        for (int i = 0; i < padding; i++)
        {
            binary.insert(0, "0");
        }
    }

    int parseSum(int b1, int b2, int carry)
    {
        // '0' -> ASCII code is 48
        // '1' -> ASCII code is 49
        // 1 + 1 + 1 = 147
        // 1 + 1 + 0 = 146
        // 0 + 1 + 0 = 145
        // 0 + 0 + 0 = 144

        return b1 + b2 + carry;
    }

public:
    string addBinary(string a, string b)
    {
        int N = a.size();
        int M = b.size();
        char CARRY = '0';

        string rez;

        if (N > M)
        {
            padBinaryStringLeft(b, N - M);
        }
        else
        {
            padBinaryStringLeft(a, M - N);
        }

        for (int i = a.size() - 1; i >= 0; i--)
        {
            int sum = parseSum(a[i], b[i], CARRY);

            cout << "sum : " << sum << endl;

            if (sum == 144)
            {
                CARRY = '0';
                rez.insert(0, "0");
            }
            else if (sum == 145)
            {
                CARRY = '0';
                rez.insert(0, "1");
            }
            else if (sum == 146)
            {
                CARRY = '1';
                rez.insert(0, "0");
            }
            else
            {
                CARRY = '1';
                rez.insert(0, "1");
            }
        }

        if (CARRY == '1')
            rez.insert(0, "1");

        return rez;
    }
};

int main()
{
    Solution solution;
    string a = "11";
    string b = "1";

    cout << solution.addBinary(a, b) << endl;

    return 0;
}