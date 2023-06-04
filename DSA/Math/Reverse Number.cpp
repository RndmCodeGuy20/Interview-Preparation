//
// Created by SHANTANU on 02-06-2023.
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    int num = 3121;
    int n, reverse = 0;

    while (num) {
        n = num % 10;
        reverse = reverse * 10 + n;
        num /= 10;
    }

    cout << reverse;
    return 0;
}