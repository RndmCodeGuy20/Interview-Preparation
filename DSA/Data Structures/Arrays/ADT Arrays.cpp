//
// Created by SHANTANU on 26-05-2023.
//
#include <iostream>

using namespace std;

struct StaticArray {
    int A[20];
    int size = 20;
    int length = 5;
};

void DisplayStaticArray() {
    struct StaticArray staticArray = {{1, 2, 3, 4, 5}, 20, 5};

    for (int i = 0; i < staticArray.length; ++i) {
        printf("%d ", staticArray.A[i]);
    }
}

int main() {
    DisplayStaticArray();
    return 0;
}