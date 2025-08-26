#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findDiagonalOrder(vector<vector<int>> &mat)
    {
        vector<int> rez;
        map<int, vector<int>> indexMap;

        for (int i = 0; i < mat.size(); i++)
        {
            for (int j = 0; j < mat[0].size(); j++)
            {
                int ind = i + j;
                if (ind % 2 == 0)
                    indexMap[ind].insert(indexMap[ind].begin(), mat[i][j]);
                else
                    indexMap[ind].push_back(mat[i][j]);
            }
        }

        for (auto &pair : indexMap)
        {
            rez.insert(rez.end(), pair.second.begin(), pair.second.end());
        }

        return rez;
    }
};

int main()
{
    Solution solution;

    vector<vector<int>> mat = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    // Since the current implementation does not return anything,
    // we just call the function to ensure it runs without errors.
    vector<int> rez = solution.findDiagonalOrder(mat);

    for (int num : rez)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
