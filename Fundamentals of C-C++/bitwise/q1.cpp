/**
 * Created by SHANTANU on 30-09-2023.
 * Topic - 
*/
#include <bits/stdc++.h>

using namespace std;

void someFunc() {
    cout << "ruzz";
}

void someOtherFunc(void (*func)()) {
    func();
}

int main() {
//    cout << (5 > 0) << endl;
//    cout << (-5 > 0) - (-5 < 0) << endl;
    someOtherFunc(&someFunc);

//    cout << (15 ^ 4);

    return 0;
}