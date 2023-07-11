//
// Created by SHANTANU on 26-06-2023.
//
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

    void BFS(int start) {
//        vector<bool> visited(this->rows, false);
//        queue<int> Q;
//
//        Q.push(start);
//        visited[start] = true;
//
//        while (!Q.empty()) {
//            int currentNode = Q.front();
//            Q.pop();
//
//            for (int i = 0; i < this->cols; ++i) {
//                if (this->graph[currentNode][i] == 1 && !visited[i]) {
//                    cout << this->graph[currentNode][i] << "->";
//                    Q.push(i);
//                    visited[i] = true;
//                }
//            }
//        }
        vector<bool> visited(this->rows, false);
        queue<int> Q;

        Q.push(start);
        visited[start] = true;

        while (!Q.empty()) {
            int currentNode = Q.front();
            Q.pop();
            cout << currentNode << "->";

            for (int i = 0; i < this->cols; i++) {
                if (this->graph[currentNode][i] == 1 && !visited[i]) {
                    Q.push(i);
                    visited[i] = true;
                }
            }
        }
    }

    void DFS(int start) {
        vector<bool> visited(rows, false);
        stack<int> s;
        s.push(start);
        visited[start] = true;

        while (!s.empty()) {
            int node = s.top();
            s.pop();
            cout << node << "-->";

            for (int i = 0; i < cols; i++) {
                if (graph[node][i] == 1 && !visited[i]) {
                    s.push(i);
                    visited[i] = true;
                }
            }
        }
    }

    void DFSRecursive(int start, vector<bool> &visited) {
        cout << start << "-->";
        visited[start] = true;

        for (int i = 0; i < cols; i++) {
            if (graph[start][i] == 1 && !visited[i]) {
                DFSRecursive(i, visited);
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

int main() {
    vector<vector<int>> adjMat = {
            {0, 1, 1, 1},
            {1, 0, 0, 1},
            {0, 0, 0, 1},
            {1, 1, 1, 0}
    };
    Graph graph(4, 4, adjMat);

//    graph.printGraph(); // Print Adjacency Matrix
//    cout << endl;

//    graph.BFS(2); // BFS Traversal
//    cout << endl;

//    graph.DFS(1); // DFS Traversal
//    cout << endl;

    vector<bool> visited(graph.rows, false);
    graph.DFSRecursive(3, visited); // DFS Recursive Traversal
    return 0;
}