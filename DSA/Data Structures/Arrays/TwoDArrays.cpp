//
// Created by SHANTANU on 26-05-2023.
//
#include <iostream>

using namespace std;

int main() {
    int *arr1D = new int[3];

    int a = 3;
    int b = 4;
    int c = 5;

    arr1D[0] = a;
    arr1D[1] = b;
    arr1D[2] = c;

//    for (int i = 0; i < 3; ++i) {
//        printf("%p -> %d\n", &arr1D[i], arr1D[i]);
//    }

    int **arr2D = new int *[3];

    arr2D[0] = new int[4];
    arr2D[1] = new int[4];
    arr2D[2] = new int[4];

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            printf("%u ", arr2D[i][j]);
        }
        printf("\n");
    }


    return 0;
}