//
// Created by SHANTANU on 22-05-2023.
//
#include <bits/stdc++.h>

using namespace std;

void Merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; ++i) {
        arr[i] = temp[i - low];
    }
}

void MergeSort(vector<int> &arr, int low, int high) {
    int mid = int((low + high) / 2);

    if (low == high) {
//        cout << arr[low] << endl;
        return;
    }

    MergeSort(arr, low, mid);
//    cout << endl;
    MergeSort(arr, mid + 1, high);
    Merge(arr, low, mid, high);
}

int main() {
    vector<int> arr = {3, 1, 5, 2, 6};
    MergeSort(arr, 0, 4);

    for (auto item: arr) {
        cout << item << " ";
    }

    return 0;
}