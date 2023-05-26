//
// Created by SHANTANU on 26-05-2023.
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> ve1 = {1, 2, 3};

    for (int i = 0; i < 3; ++i) {
        cout << &ve1[i] << " ";
    }

    /**
     * hybrid vectors
     */
    cout << "\n\n";

    vector <pair<int, int>> pairVector = {{1, 2},
                                          {3, 4}};
    pairVector.push_back({5, 6});

    for (int i = 0; i < 3; ++i) {
        cout << pairVector[i].first << " ";
    }
    
    return 0;
}