#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(3);
    v.push_back(2);
    v.push_back(9);
    v.push_back(3);
    v.push_back(4);

    vector<int> n;
    n.push_back(6); 
    n.push_back(9);                  // question me (32534+6 = 32540) krke dikhana h
    vector<int> ans;                    // aur bhi cases included h like (524+564) jisme aage ek extra carry aaega

    int i = v.size() - 1;
    int j = n.size() - 1;
    int carry = 0;

    while (i >= 0 && j >= 0)
    {
        int val1 = v[i];
        int val2 = n[j];

        int sum = val1 + val2 + carry;

        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
        j--;
    }
    

    // first case
    while (i >= 0)
    {
        int sum = v[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
    }

    // second case
    while (j >= 0)
    {
        int sum = n[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        
        ans.push_back(sum);
        j--;
    }
    // third case
    while (carry != 0)
    {
        int sum = carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
    }

    reverse(ans.begin(), ans.end());

    for (int m = 0; m < ans.size(); m++)
    {
        cout << ans[m] << " ";
    }
    cout << endl;

    return 0;
}