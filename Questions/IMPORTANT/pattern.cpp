#include <bits/stdc++.h>
using namespace std;

void generatePattern(int n)
{

    vector<vector<int>> pattern(n, vector<int>(n));

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            pattern[i][j] = (i + j) % n;
        }
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << pattern[i][j];
        }
        cout << endl;
    }
}

int main()
{
    int n = 3;
    generatePattern(n);
    return 0;
}
