//
// Created by SHANTANU on 03-06-2023.
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

//        int data = input[index];
        Node *q = new Node(data, NULL, NULL);
        if (data == -1) {
            return NULL;
        }
        q->left = BuildTree();
        q->right = BuildTree();

        return q;
    }

    void BuildTreeFromArray(vector<int> input) {
        int index = 0;
        Node *temp, *newNode;
        temp = new Node(input[index], NULL, NULL);
        index++;
        root = temp;
        queue<Node *> Q;
        Q.push(temp);

        while (!Q.empty() || index < input.size()) {
            temp = Q.front();
            Q.pop();

            newNode = new Node(input[index], NULL, NULL);
            temp->left = newNode;
            Q.push(newNode);
            index++;

            newNode = new Node(input[index], NULL, NULL);
            temp->right = newNode;
            Q.push(newNode);
            index++;
        }
    }

    void DisplayTree(Node *q) {
        if (!q) return;
        cout << q->data << " ";
        DisplayTree(q->left);
        DisplayTree(q->right);
    }

    int MaxNodeRecursive(Node *p) {
        if (p == NULL) {
            return INT_MIN;
        }
        int maxEl = INT_MIN;
        int curr = p->data;

        int left = MaxNodeRecursive(p->left);
        int right = MaxNodeRecursive(p->right);

        maxEl = max(left, right);

        return max(maxEl, curr);
    }

    static int MaxNodeIterative(Node *p) {
        int maxEl, curr = p->data;
        queue<Node *> Q;
        Q.push(p);
        while (!Q.empty()) {
            Node *temp = Q.front();
            Q.pop();
            maxEl = max(maxEl, temp->data);

            if (temp->left) Q.push(temp->left);
            if (temp->right) Q.push(temp->right);
        }

        return maxEl;
    }
};

int main() {
    Tree tree;
    tree.DisplayTree(tree.root);
//    cout << endl;
//    cout << tree.MaxNodeRecursive(tree.root);
//    cout << endl;
//    cout << Tree::MaxNodeIterative(tree.root);
//    vector<int> input = {1, 2, 4};
//    tree.BuildTreeFromArray(input);

    return 0;
}