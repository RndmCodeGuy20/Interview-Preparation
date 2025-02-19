#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        int rez;
        int i = 0, j = 0;
        vector<int> restartIndices;

        for (int k = 0; k < haystack.size(); k++)
        {
            if (needle[0] == haystack[k])
            {
                restartIndices.push_back(k);
            }
        }

        if (restartIndices.size() == 0)
            return -1;

        int startIndex = 0;
        i = restartIndices[startIndex];

        while (i < haystack.size() && j < needle.size())
        {
            if (haystack[i] == needle[j])
            {
                if (j == needle.size() - 1)
                {
                    return (i - (needle.size() - 1));
                }
                i++;
                j++;
            }
            else
            {
                startIndex++;
                i = startIndex;
                j = 0;
            }
        }

        return -1;
    }
};

int main()
{
    Solution solution;

    string haystack = "mississipi";
    string needle = "issip";

    cout << solution.strStr(haystack, needle) << endl;

    return 0;
}