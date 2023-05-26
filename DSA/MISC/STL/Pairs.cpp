#include <bits/stdc++.h>

using namespace std;

int main() {
    pair<int, int> pair1 = {1, 2};
    printf("Pair first element : %d, second element:  %d\n\n", pair1.first, pair1.second);

    /**
     * nested pairs
     */

    pair<int, pair<int, float>> nestedPair = {1, {2, 3.0}};
    printf("nested pair first el: %d, second el ka first: %d, usika second: %f\n\n", nestedPair.first,
           nestedPair.second.first, nestedPair.second.second);

    /**
     * array of pairs
     */

    pair<int, int> arr[] = {{1, 2},
                            {3, 4}};
    cout << arr[0].second;

    return 0;
}