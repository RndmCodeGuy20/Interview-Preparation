#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    bool checkVowels(string subWord, int k)
    {
        unordered_set<char> vowelsCheck = {'a', 'e', 'i', 'o', 'u'};
        unordered_set<char> consonantsCheck = {'a', 'e', 'i', 'o', 'u'};
        int count = 0;

        for (char wordChar : subWord)
        {
            vowelsCheck.erase(wordChar);

            if (consonantsCheck.find(wordChar) == consonantsCheck.end())
            {
                count++;
            }
        }

        cout << "count " << count << endl;

        return (vowelsCheck.size() == 0 && count == k);
    }

    // bool checkConsonants(string subWord, int k)
    // {
    //     unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    //     int count = 0;

    //     for (char wordChar : subWord)
    //     {
    //         if (vowels.find(wordChar) != vowels.end())
    //         {
    //             count++;
    //         }
    //     }

    //     return count == k;
    // }

public:
    long long countOfSubstrings(string word, int k)
    {
        int WIN_SIZE = k + 5;
        int WORD_SIZE = word.size();

        long long int count = 0;

        for (int i = 0; i <= WORD_SIZE - WIN_SIZE; i++)
        {
            string subWord = word.substr(i, WIN_SIZE);
            bool vowelsMatch = checkVowels(subWord, k);

            if (vowelsMatch)
                count++;
        }

        return count;
    }
};

int main()
{
    Solution solution;
    // string word = "aeioqq";
    string word = "ieaouqqieaouqq";
    int k = 1;

    cout << "res " << solution.countOfSubstrings(word, k) << endl;

    return 0;
}