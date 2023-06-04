//
// Created by SHANTANU on 03-06-2023.
//
#include <bits/stdc++.h>

using namespace std;

class Node {
public:
    Node *left;
    int data;
    Node *right;

    Node(int data, Node *left, Node *right) {
        this->data = data;
        this->left = left;
        this->right = right;
    }
};

class Tree {
public:
    Node *root;

    Tree() {
        root = BuildTree();
    }

    Node *BuildTree() {
        int data;
        cin >> data;

//        int data = input[index];
        Node *q = new Node(data, nullptr, nullptr);
        if (data == -1) {
            return nullptr;
        }
        q->left = BuildTree();
        q->right = BuildTree();

        return q;
    }
};

int main() {


    return 0;
}