//
// Created by SHANTANU on 22-05-2023.
//
//
// Created by SHANTANU on 22-05-2023.
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    for (int i = 0, t = 5; i <= 5; i++, t--) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        for (int k = 2 * t + 1; k > 0; k--) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}