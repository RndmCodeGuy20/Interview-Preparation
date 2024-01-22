/**
 * Created by SHANTANU on 04-10-2023.
 * Topic - 
*/
#include <iostream>

using namespace std;

int main() {
    for (int i = 0; i < 5; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << j;
        }

        for (int j = 0; j < 8 - 2 * i; ++j) {
            cout << " ";
        }

        for (int j = i; j > 0; j--) {
            cout << j;
        }

        cout << endl;
    }

    return 0;
}