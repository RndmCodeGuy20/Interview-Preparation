//
// Created by SHANTANU on 29-05-2023.
//
#include <iostream>
#include <bits/stdc++.h>


using namespace std;

class Node {
public:
    Node *left;
    int data;
    Node *right;

    Node(int data, Node *left = NULL, Node *right = NULL) {
        this->data = data;
        this->left = left;
        this->right = right;
    }
};

class Tree {
public:
    Node *root;

    Tree(int arr[]) {
        root = new Node(arr[0], NULL, NULL);
        Node *ptr;

        Queue<INFINITY>;

    }
};

int main() {


    return 0;
}