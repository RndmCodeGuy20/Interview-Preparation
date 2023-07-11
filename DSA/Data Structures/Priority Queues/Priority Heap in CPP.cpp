//
// Created by SHANTANU on 29-06-2023.
//
#include <bits/stdc++.h>

using namespace std;

class Heap {
public:
    int *heap;
    int size, capacity;

    Heap(int capacity) {
        this->capacity = capacity;
        heap = new int[this->capacity];
        this->size = 0;
    }

    int parent(int i) {
        return heap[(i - 1) / 2];
    }

    int left(int i) {
        return heap[2 * i + 1];
    }

    int right(int i) {
        return heap[2 * i + 2];
    }
};

class MinHeap : public Heap {
public:
    MinHeap(int capacity) : Heap(capacity) {};

    MinHeap(int capacity, vector<int> arr) : Heap(capacity) {
        for (int i = 2; i < arr.size(); ++i) {
            this->InsertElement(arr[i]);
            this->size++;
        }
    }

    void InsertElement(int el) {
        int temp, i = this->size - 1;
        temp = this->heap[size - 1];

        while (i > 1 && temp < this->heap[i / 2]) {
            this->heap[i] = this->heap[i / 2];
            i /= 2;
        }
        this->heap[i] = temp;
    }

    void Heapify(int i) {
        int li = left(i), ri = right(i);
        int smallest = i;

        // check left child with parent
        if (li < this->size && this->heap[li] < this->heap[smallest]) smallest = li;

        // check right child with smallest
        if (ri < this->size && this->heap[ri] < this->heap[smallest]) smallest = ri;

        if (smallest != i) {
            swap(this->heap[i], this->heap[smallest]);
            Heapify(smallest);
        }
    }
};

class MaxHeap : private Heap {
public:
    MaxHeap(int capacity) : Heap(capacity) {};

    void InsertElement(int el) {
        int temp, i = this->size - 1;
        temp = this->heap[this->size - 1];
        this->size++;

        while (i > 1 && temp > this->heap[i / 2]) {
            this->heap[i] = this->heap[i / 2];
            i /= 2;
        }
        this->heap[i] = temp;
    }
};


int main() {

    MinHeap minHeap(5, {1, 2, 3, 4, 5});
//    MaxHeap maxHeap(5);

    for (int i = 0; i < minHeap.size; ++i) {
        cout << minHeap.heap[i] << " ";
    }

    return 0;
}