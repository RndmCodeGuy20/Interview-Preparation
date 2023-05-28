//
// Created by SHANTANU on 28-05-2023.
//
#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node *next = NULL;

    Node(int data, Node *next) {
        this->data = data;
        this->next = next;
    }
};

class LinkedList {
public:
    Node *head;
    int length;

    LinkedList(int array[], int length) {
        head = new Node(array[0], NULL);
        Node *ptr = head;

        for (int i = 1; i < length; ++i) {
            Node *newNode = new Node(array[i], NULL);
            ptr->next = newNode;
            ptr = ptr->next;
        }
        this->length = length;
    }

    void DisplayLinkedList() {
        Node *ptr;
        ptr = head;

        while (ptr) {
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
    }

    int NumOfNodes() {
        return this->length;
    }

    int ListSum() {
        int sum = 0;
        Node *ptr = head;

        while (ptr) {
            sum += ptr->data;
            ptr = ptr->next;
        }

        return sum;
    }

    int MaximumElement() {
        int maxEl = 0;
        Node *ptr = head;

        while (ptr) {
            maxEl = max(maxEl, ptr->data);
            ptr = ptr->next;
        }

        return maxEl;
    }
};

int main() {
    int arr[] = {1, 9, 3, 4, 5};

    LinkedList ll(arr, 5);

    cout << ll.head << " " << ll.length << endl;

//    ll.DisplayLinkedList();
//    cout << "\n";
//    cout << ll.NumOfNodes();

    cout << ll.MaximumElement();

    return 0;
}