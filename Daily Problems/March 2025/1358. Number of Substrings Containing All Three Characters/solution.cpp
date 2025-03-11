#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    bool incrementValidSubstring(string sub)
    {
        cout << "sub " << sub << endl;
        unordered_set<char> abcs = {'a', 'b', 'c'};
        for (char character : sub)
        {
            abcs.erase(character);
        }

        if (abcs.size() == 0)
            return true;
        else
            return false;
    }

    //// minimum sliding window size = 3
    // int WINDOW_SIZE = 3;

    // if (s.size() == WINDOW_SIZE)
    // {
    //     if (incrementValidSubstring(s))
    //     {
    //         return 1;
    //     }
    //     else
    //         return 0;
    // }

    // for (int i = 0; i <= s.size() - WINDOW_SIZE; i++)
    // {
    //     for (int j = WINDOW_SIZE; j < s.size(); j++)
    //     {
    //         cout << i << " " << j << endl;
    //         if (incrementValidSubstring(s.substr(i, j)))
    //         {
    //             cout << "incr\n"
    //                  << endl;
    //             count++;
    //         }
    //     }
    // }

public:
    int numberOfSubstrings(string s)
    {
        int count = 0;
        int left = 0;
        unordered_map<char, int> charMap;
        int STR_SIZE = s.size();

        for (int right = 0; right < STR_SIZE; right++)
        {
            charMap[s[right]]++;

            while (charMap.size() == 3)
            {
                count += STR_SIZE - right;
                charMap[s[left]]--;
                if (charMap[s[left]] == 0)
                {
                    charMap.erase(s[left]);
                }
                left++;
            }
        }

        return count;
    }
};

int main()
{
    Solution solution;
    // string s = "abcabc";
    // string s = "abc";
    // string s = "aaacb";
    string s = "aba";

    cout << solution.numberOfSubstrings(s) << endl;

    return 0;
}