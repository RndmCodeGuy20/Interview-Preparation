//
// Created by SHANTANU on 28-05-2023.
//
#include <iostream>

using namespace std;

class ArrayClass {
public:
    int *base;
    int length;
    int size;

    ArrayClass(int arr[], int length, int size) {
        this->size = size;
        this->length = length;
        this->base = new int[size];

        for (int i = 0; i < length; ++i) {
            this->base[i] = arr[i];
        }
    };

    void DisplayArray() {
        for (int i = 0; i < this->length; ++i) {
            printf("%d ", this->base[i]);
        }
    };

    void InsertInArray(int num) {
        this->base[this->length] = num;
        this->length++;
    }

    void InsertAtIndex(int num, int index) {
        int i = this->length;

        while (i > index) {
            this->base[i] = this->base[i - 1];
            i--;
        }

        this->base[i] = num;
        this->length++;
    }

    void DeleteAtIndex(int index) {
        int i = index;

        while (i < this->length) {
            this->base[i] = this->base[i + 1];
            i++;
        }
        this->length--;
    }

    void ReverseArray() {
        for (int i = 0, j = this->length - 1; i < j; i++, j--) {
            int temp = this->base[i];
            this->base[i] = this->base[j];
            this->base[j] = temp;
        }
    }
};

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    ArrayClass array(arr, 5, 10);

//    array.InsertInArray(999);
//    array.InsertAtIndex(100, 0);
//    array.DeleteAtIndex(1);
    array.ReverseArray();
    array.DisplayArray();


    return 0;
}