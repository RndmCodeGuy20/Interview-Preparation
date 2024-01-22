#include "bits/stdc++.h"

using namespace std;

int main() {
    string Black, White, Moves;
    cin >> Black >> White >> Moves;

    map<char, int> scores;
    scores.insert({'P', 1});
    scores.insert({'N', 3});
    scores.insert({'B', 3});
    scores.insert({'R', 5});
    scores.insert({'Q', 9});
    scores.insert({'K', 0});

    vector<vector<char>> board(0, vector<>)
}