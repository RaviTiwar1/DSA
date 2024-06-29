#include <bits/stdc++.h>
using namespace std;
int main()
{
    // pair<int, int> p;
    // cin >> p.first;
    // cin >> p.second;
    // cout << p.first << " " << p.second;

    string s1, s2;

    getline(cin,s1);
    getline(cin,s2);

    int n = s1.length() + s2.length();

    cout<<n<<endl;
    string ans;

    int i = 0, j = 0;
        
        while (i < s1.length() && j < s2.length()) {
            ans += s1[i++];
            cout<<ans<<endl;
            ans += s2[j++];
            cout<<ans<<endl;
        }cout<<endl;
        cout<<endl;
        cout<<endl;

    vector<string> ss ={"cat","dog","horse"};
    cout<<"String in vector is: "<<ss[0]<<" "<<ss[1]<<" "<<ss[2]<<endl<<endl;
   


}