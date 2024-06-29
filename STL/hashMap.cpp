#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of element:";
    cin >> n;
    int arr[n];
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i << " value:";
        cin >> arr[i];
        m[arr[i]]++; // pre-compute (basically array me input lete hi hue map me counting kr rhe h )
    }

    // for (auto it : m)
    // {
    //     cout << it.first << "->" << it.second<<endl;    //fetch krne ka ek aur tarika 
    // }

    int q;
    cout<<"Enter the queries:";
    cin>>q;       //kitne numbers ki counting user ko chaiye wo puche hai
    while (q--)
    {
        int num;
        cin>>num;  //konsa number h wo puch rhe h

        cout<<num <<" occurs " <<m[num]<<" times"<<endl;    //fetch kr rhe

    }

    return 0;
}