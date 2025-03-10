#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    int countMinRecolors(string blocks)
    {
        int count = 0;
        for (int i = 0; i < blocks.size(); i++)
        {
            if (blocks[i] == 'W')
                count++;
        }

        return count;
    }

public:
    int minimumRecolors(string blocks, int k)
    {
        int rez = INT_MAX;

        if (blocks.size() == k)
            return countMinRecolors(blocks);

        for (int i = 0; i <= blocks.size() - k; i++)
        {
            string block = blocks.substr(i, k);
            cout << "current block: " << block << endl;
            rez = min(rez, countMinRecolors(block));
        }

        return rez;
    }
};

int main()
{
    Solution solution;

    string blocks = "WBBWWBBWBW";
    // string blocks = "WBWBBBW";
    // string blocks = "WBBWWBB";
    // string blocks = "WWBBBWBBBBBWWBWWWB";
    // int k = 16;
    int k = 7;
    // int k = 2;

    cout
        << "minimum recolors: " << solution.minimumRecolors(blocks, k) << endl;

    return 0;
}