//
// Created by SHANTANU on 01-06-2023.
//
#include <iostream>

#ifndef INTERVIEW_PREPARATION_QUEUE_H
#define INTERVIEW_PREPARATION_QUEUE_H

class Node {
public:
    int data;
    Node *left;
    Node *right;
};

class Queue {
private:
    int front;
    int rear;
    int size;
    Node **Q;
public:
    Queue() {
        front = rear = -1;
        size = 10;
        Q = new Node *[size];
    }

    Queue(int size) {
        front = rear = -1;
        this->size = size;
        Q = new Node *[this->size];
    }

    void Enqueue(Node *x) {
        if (this->rear == this->size - 1) {
            printf("Queue Full\n");
        } else {
            this->rear++;
            Q[rear] = x;
        }
    }

    Node *Dequeue() {
        Node *x = NULL;
        if (this->front == this->rear) {
            printf("Queue Empty\n");
        } else {
            x = Q[front + 1];
            front++;
        }

        return x;
    }
};

#endif //INTERVIEW_PREPARATION_QUEUE_H
