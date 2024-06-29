
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> s = {-2, 10, 1, 3, -1, 4, 5};
    int k = 2, sum = 0, ans = INT_MAX;
    for (int i = 0; i < k; i++)
    {
        sum += s[i];
    }
    cout << "sum->" << sum << endl;
    ans = sum;
    for (int i = 1; i < s.size() -1; i++)        //jitna k ka size hoga usse k-1 krke size se minus krna 
    {
        sum = sum - s[i - 1] + s[i + k - 1];
        ans = min(sum, ans);
        cout << "sum->" << sum << endl;
    }
    cout << ans << endl;

    return 0;
}