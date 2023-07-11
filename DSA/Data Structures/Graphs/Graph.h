//
// Created by SHANTANU on 05-07-2023.
//

#ifndef INTERVIEW_PREPARATION_GRAPH_H
#define INTERVIEW_PREPARATION_GRAPH_H


#include <bits/stdc++.h>

using namespace std;

class Graph {
public:
    int rows, cols;
    vector<vector<int>> graph;

    Graph(int rows, int cols, vector<vector<int>> graph) {
        this->rows = rows;
        this->cols = cols;
        this->graph.resize(rows, vector<int>(cols, 0));

        for (int i = 0; i < this->rows; i++) {
            for (int j = 0; j < this->cols; j++) {
                this->graph[i][j] = graph[i][j];
            }
        }
    }

    void printGraph() {
        char rowIndex = 'A';
        char colIndex = 'A';

        cout << "  ";
        for (int i = 0; i < this->cols; i++) {
            cout << colIndex++ << " ";
        }
        cout << endl;

        for (int i = 0; i < this->rows; i++) {
            cout << rowIndex++ << " ";
            for (int j = 0; j < this->cols; j++) {
                cout << this->graph[i][j] << " ";
            }
            cout << endl;
        }
    }
};

#endif //INTERVIEW_PREPARATION_GRAPH_H
