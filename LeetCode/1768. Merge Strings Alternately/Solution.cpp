/**
 * Created by SHANTANU on 13-12-2023.
 * Topic - 
*/
#include <bits/stdc++.h>
#include <iostream>


using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        unsigned int len = min(word1.size(), word2.size());

        string rez;
        int counter = 0;

        while (counter < len) {
            rez += word1[counter];
            rez += word2[counter];
            counter++;
        }

        if (word1.size() > word2.size()) {
            for (unsigned int i = len; i < word1.size(); ++i) {
                rez += word1[i];
            }
        } else {
            for (unsigned int i = len; i < word2.size(); ++i) {
                rez += word2[i];
            }
        }

        return rez;
    }
};

int main() {

    Solution solution;
    cout << solution.mergeAlternately("abc", "pqrstu");

    return 0;
}