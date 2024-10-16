
#include <bits/stdc++.h>
using namespace std;

vector<int> appending_numbers(int P1, int P2, vector<int> result)
{
    result.push_back(P1);
    result.push_back(P2);
    int count = 2;
    int ans = 0;
    while (count != 5)
    {
        ans = P1 + P2;
        result.push_back(ans);
        P1 = P2;
        P2 = ans;
        count++;
    }
    return result;
}
int main()
{
    int p1, p2;
    cout << "Enter the number:P1--" << endl;
    cin >> p1;
    cout << "Enter the number:P2--" << endl;
    cin >> p2;
    vector<int> result;
    vector<int> ans = appending_numbers(p1, p2, result);
    for (int i = 0; i < ans.size(); ++i)
    {
        cout << ans[i] << " ";
    }
    return 0;
}