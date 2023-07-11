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
//    int array[11] = {1, 2, 3, 4, 5, -1, -1, -1, -1, -1, -1};

    Tree() {
        root = BuildTree();
    }

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

    void PreOrder(Node *q) {
        if (q == NULL) return;
        cout << q->data << " ";
        PreOrder(q->left);
        PreOrder(q->right);
    }

    void PostOrder(Node *q) {
        if (q == NULL) return;
        PostOrder(q->left);
        PostOrder(q->right);
        cout << q->data << " ";
    }

    void InOrder(Node *q) {
        if (q == NULL) return;
        InOrder(q->left);
        cout << q->data;
        InOrder(q->right);
    }

    void LevelOrder(Node *q) {
        queue<Node *> queue;
        Node *temp;

        if (!q) return;

        queue.push(q);

        while (!queue.empty()) {
            temp = queue.front();
            queue.pop();
            cout << temp->data << " ";

            if (temp->left) {
                queue.push(temp->left);
            }
            if (temp->right) {
                queue.push(temp->right);
            }
        }
    }
};


int main() {

    Tree tree({1, -1, 3, 4, 5});
//    tree.PreOrder(tree.root);
//    tree.PostOrder(tree.root);
//    tree.InOrder(tree.root);
    tree.LevelOrder(tree.root);

    return 0;
}