//
// Created by SHANTANU on 24-05-2023.
//
#include <iostream>

using namespace std;

int main() {
    // array object in c++.
    int *arrCPP = new int[5];

    printf("address of arrCPP @ index 0 : %u, garbage value @ index 0 : %u", arrCPP, *arrCPP);

    return 0;
}