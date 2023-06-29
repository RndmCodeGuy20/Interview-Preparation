#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> Q;
    int i = 3;

    while (i > 0)
    {
        Q.push(i * 2);
    }

    Q.pop();

    for (int i = 0; i < Q.size(); i++)
    {
    }

    return 0;
}