//
// Created by SHANTANU on 24-05-2023.
//
#include <iostream>

using namespace std;

int main() {
    // array object in c++.
    int *arrCPP = new int[5];

    printf("address of array pointer : %u\naddress pointed by array pointer : %u\nvalue at address pointed by array pointer : %u\n\n",
           &arrCPP, arrCPP, *arrCPP);

    for (int i = 0; i < 5; ++i) {
        printf("arrCPP[%d] -> address : %i, value : %u\n", i, &arrCPP[i], arrCPP[i]);
    }

    for (int i = 0; i < 5; ++i) {
        *(arrCPP + i) = rand() / 100;
    }

    cout << "new array : ";
    for (int i = 0; i < 5; ++i) {
        printf("%d ", arrCPP[i]);
    }

    free(arrCPP);

    return 0;
}