#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> ans;
    int n = 5;
    while (n > 0)
    {
        ans.push_back(n);
       
        n--;
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}