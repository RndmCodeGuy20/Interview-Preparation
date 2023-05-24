//
// Created by SHANTANU on 24-05-2023.
//
#include <iostream>

using namespace std;

int main() {
    int val = 3;
    int *ptr;

    printf("address of val : %u, address of ptr : %u", &val, &ptr);
    ptr = &val;
    printf("\n\naddress of val : %u, memory pointed by ptr : %u", &val, ptr);
    printf("\n\nvalue at ptr : %d", *ptr);

    return 0;
}