/**
 * Created by SHANTANU on 25-09-2023.
 * Topic - 
*/
#include <bits/stdc++.h>
#include "chrono"

using namespace std;

int main() {
//    register int i = 1;
//    int *ptr = &i;
//    cout << *ptr;
    register auto j = 0;
    auto start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < 10000000; ++i) {
        while (j < 1000) {
            j++;
        }
    }
    auto end = std::chrono::high_resolution_clock::now();

    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    j = 0;
    // Print the execution time
    std::cout << "Execution time (normal) : " << duration.count() << " milliseconds" << std::endl;


    start = std::chrono::high_resolution_clock::now();
    for (register int i = 0; i < 10000000; ++i) {
        while (j < 1000) {
            j++;
        }
    }
    end = std::chrono::high_resolution_clock::now();

    duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);

    // Print the execution time
    std::cout << "Execution time (register) : " << duration.count() << " milliseconds" << std::endl;


    return 0;
}