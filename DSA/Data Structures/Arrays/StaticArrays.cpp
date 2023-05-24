//
// Created by SHANTANU on 24-05-2023.
//
#include <iostream>

using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};

    printf("size of array : %d\nsize of element in array : %d\nlength of array : %d", sizeof arr, sizeof arr[0],
           sizeof arr / sizeof arr[0]);

    int length = sizeof arr / sizeof arr[0];

    cout << endl;

    for (int i = 0; i < length; ++i) {
        printf("%d ", *(arr + i));
    }

    cout << endl;

    for (int i = 0; i < length; ++i) {
        printf("%d ", arr[i]);
    }

    return 0;
}