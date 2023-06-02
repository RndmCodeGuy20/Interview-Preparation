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
        Node *q = new Node(data, NULL, NULL);
        if (data == -1) {
            return NULL;
        }
        q->left = BuildTree();
        q->right = BuildTree();

        return q;
    }

    void PreOrder(Node *q) {
        if (q == NULL) return;
        cout << q->data << " ";
        PreOrder(q->left);
        PreOrder(q->right);
    }
};


int main() {
    Tree tree;

    tree.PreOrder(tree.root);

    return 0;
}