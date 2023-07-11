//
// Created by SHANTANU on 18-06-2023.
//

#ifndef INTERVIEW_PREPARATION_BINARY_TREE_H
#define INTERVIEW_PREPARATION_BINARY_TREE_H

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

    Node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

class Tree {
public:
    Node *root;

    Tree(vector<int> nums) {
        queue<Node *> Q;
        Node *temp, *newNode;
        int i = 0;

        root = new Node(nums[i], nullptr, nullptr);
        Q.push(root);

        while (!Q.empty() && i < nums.size() - 1) {
            i++;
            temp = Q.front();
            Q.pop();

            if (nums[i] != -1) {
                newNode = new Node(nums[i], nullptr, nullptr);
                temp->left = newNode;
                Q.push(newNode);
            }

            i++;
            if (nums[i] != -1) {
                newNode = new Node(nums[i], nullptr, nullptr);
                temp->right = newNode;
                Q.push(newNode);
            }
        }
    }

    Tree() {
        queue<Node *> Q;
        int val;
        Node *ptr, *newNode;

        cout << "Enter root : ";
        cin >> val;

        this->root = new Node(val, nullptr, nullptr);

        Q.push(this->root);

        while (!Q.empty()) {
            ptr = Q.front();
            Q.pop();

            cout << "Enter left child of " << ptr->data << " : ";
            cin >> val;

            if (val != -1) {
                newNode = new Node(val, nullptr, nullptr);
                ptr->left = newNode;
                Q.push(newNode);
            }

            cout << "Enter right child of " << ptr->data << " : ";
            cin >> val;

            if (val != -1) {
                newNode = new Node(val, nullptr, nullptr);
                ptr->right = newNode;
                Q.push(newNode);
            }
        }
    }

    void LevelOrder() {
        queue<Node *> Q;
        Node *ptr;
        Q.push(this->root);
        while (!Q.empty()) {
            ptr = Q.front();
            Q.pop();
            cout << ptr->data << " ";
            if (ptr->left != NULL) {
                Q.push(ptr->left);
            }
            if (ptr->right != NULL) {
                Q.push(ptr->right);
            }
        }
    }
};

#endif //INTERVIEW_PREPARATION_BINARY_TREE_H
