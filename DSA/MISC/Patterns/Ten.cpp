//
// Created by SHANTANU on 22-05-2023.
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < i + 1; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 4; i > 0; i--) {
        for (int j = i; j > 0; j--) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}