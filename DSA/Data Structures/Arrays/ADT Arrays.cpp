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

struct DynamicArray {
    int *base;
    int size;
    int length;
};

int *GenerateArray(int arr[], struct DynamicArray &dynamicArray) {
    dynamicArray.base = new int[dynamicArray.length];

    for (int i = 0; i < dynamicArray.length; ++i) {
        dynamicArray.base[i] = arr[i];
    }

    return dynamicArray.base;
}

void DisplayStaticArray() {
    struct StaticArray staticArray = {{1, 2, 3, 4, 5}, 20, 5};

    for (int i = 0; i < staticArray.length; ++i) {
        printf("%d ", staticArray.A[i]);
    }
}

struct DynamicArray DisplayDynamicArray() {
    struct DynamicArray dynamicArray;
    dynamicArray.length = 10;
    dynamicArray.size = 20;

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    dynamicArray.base = GenerateArray(arr, dynamicArray);
    cout << dynamicArray.length << " " << dynamicArray.size << " \n";

    return dynamicArray;
}


int main() {
//    DisplayStaticArray();
    struct DynamicArray array = DisplayDynamicArray();

    for (int i = 0; i < array.length; ++i) {
        printf("%d ", array.base[i]);
    }
    return 0;
}