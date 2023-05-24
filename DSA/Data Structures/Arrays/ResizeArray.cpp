//
// Created by SHANTANU on 24-05-2023.
//
#include <iostream>

using namespace std;

int main() {
    int *p = new int[5];
    int *q = new int[10];

    for (int i = 0; i < 5; ++i) {
        p[i] = rand() / 100;
        cout << p[i] << " ";
    }

    cout << endl;

    q = p;
    p = NULL;

    for (int i = 0; i < 5; ++i) {
        cout << q[i] << " ";
    }

    return 0;
}