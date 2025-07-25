#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maximumGain(string s, int x, int y)
    {
        vector<int> scores = {x, y};
        vector<string> subs = {"ab", "ba"};

        stack<char> stringStack;

        int maxSub = x < y ? 1 : 0; // Determine which substring has the greater score
        int score = 0;

        // 1. Remove the substring with greater score
        for (int i = 0; i < s.size(); i++)
        {
            if (!stringStack.empty() && stringStack.top() == subs[maxSub][0] && s[i] == subs[maxSub][1])
            {
                score += scores[maxSub];
                stringStack.pop();
            }
            else
            {
                stringStack.push(s[i]);
            }
        }

        string remainingChars;
        while (!stringStack.empty())
        {
            remainingChars += stringStack.top();
            stringStack.pop();
        }
        reverse(remainingChars.begin(), remainingChars.end()); // Reverse to maintain original order

        // 2. Remove the substring with lower score
        maxSub = 1 - maxSub; // Switch to the substring with lower score
        for (int i = 0; i < remainingChars.size(); i++)
        {
            if (!stringStack.empty() && stringStack.top() == subs[maxSub][0] && remainingChars[i] == subs[maxSub][1])
            {
                score += scores[maxSub];
                stringStack.pop();
            }
            else
            {
                stringStack.push(remainingChars[i]);
            }
        }

        return score;
    }
};    

int main()
{
    Solution solution;
    cout << solution.maximumGain("cdbcbbaaabab", 4, 5) << endl;
    return 0;
}