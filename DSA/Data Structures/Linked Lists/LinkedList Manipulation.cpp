//
// Created by SHANTANU on 28-05-2023.
//
#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node *next;

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
        this->length = length;

        for (int i = 1; i < length; ++i) {
            Node *newNode = new Node(array[i], NULL);
            ptr->next = newNode;
            ptr = ptr->next;
        }
    }

    void DisplayLinkedList() {
        Node *ptr;
        ptr = this->head;

        while (ptr) {
            cout << ptr->data << " -> ";
            ptr = ptr->next;
        }
        cout << "__";
    }

    void InsertElBegin(int el) {
        Node *newNode = new Node(el, head);
        this->head = newNode;
        this->length++;
    }

    void InsertAtPosition(int el, int pos) {
        if (pos == 0) {
            InsertElBegin(el);
            return;
        }
        Node *ptr = head;
        for (int i = 0; i < pos - 1; ++i) {
            ptr = ptr->next;
        }

        Node *newNode = new Node(el, ptr->next);
        ptr->next = newNode;
    }
};

int main() {
    int arr[] = {1, 9, 3, 4, 5};

    LinkedList ll(arr, 5);

//    ll.InsertElBegin(20);
    ll.InsertAtPosition(20, 4);

    ll.DisplayLinkedList();

    return 0;
}