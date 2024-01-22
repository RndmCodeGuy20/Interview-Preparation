/**
 * Created by SHANTANU on 30-09-2023.
 * Topic - 
*/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int A = 20;
    int ARR[] = {1, 2, 3};

    int *ptrToA = &A, *ptrToARR = ARR;

    cout << ptrToA << " " << ptrToARR << endl;

    ptrToA++;

    cout << ptrToA << " " << ptrToARR << endl;
    return 0;
}