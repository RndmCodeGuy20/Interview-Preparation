//
// Created by SHANTANU on 05-07-2023.
//
#include <bits/stdc++.h>
#include "../Graph.h"

using namespace std;

class Solution {
public:
    static void DFS(vector<vector<int>> G, int start) {
        stack<int> Q;
        vector<bool> visited(G.size(), false);
        string charList;
        for (int i = 0; i < G.size(); ++i) {
            charList.push_back(65 + i);
        }

        Q.push(start);
        visited[start] = true;

        while (!Q.empty()) {
            int row = Q.top();
            Q.pop();

            cout << charList[row] << "-->";

            for (int col = 0; col < G.size(); ++col) {
                if (G[row][col] == 1 && !visited[col]) {
                    visited[col] = true;
                    Q.push(col);
                }
            }
        }
    }
};

int main() {
    vector<vector<int>> g = {
            {0, 1, 0, 0},
            {1, 0, 1, 1},
            {0, 1, 0, 1},
            {0, 1, 1, 0}
    };

    Graph graph(g.size(), g[0].size(), g);
    Solution solution;

    Solution::DFS(graph.graph, 3);

    return 0;
}