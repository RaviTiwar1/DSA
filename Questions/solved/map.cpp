#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(4);
    v.push_back(3);
    v.push_back(1);
    v.push_back(3);
    v.push_back(2);

    map<int, int> m;
    for (int i = 0; i < v.size(); i++)
    {
        m[v[i]]++;
    }

    for (auto it : m)
    {
        cout << it.first << "->" << it.second << endl;
    }


    cout<<"-----dusra tarika-----"<<endl;

    map<int, int> m2;

    for (auto num : v)
    {
        m2[num]++;
    }

    for (auto it : m2)
    {
        cout << it.first << "->" << it.second << endl;
    }

    return 0;
}