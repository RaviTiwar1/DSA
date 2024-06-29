#include <bits/stdc++.h>
using namespace std;


// for least occuring number(other numbers are only repeating twice)

int singleNumber(vector<int> &v)
{
    sort(v.begin(), v.end());
    int ans = 0;

    for (int i = 0; i < v.size(); i += 2)
    {
        if (v[i] != v[i + 1] || i + 1 == v.size()  )
        {
            ans = v[i];
            break;
        }
    }
    return ans;
}
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

    sort(v.begin(), v.end());
    cout << "Sorted vector is : ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    int target=singleNumber(v);

    cout<<"Least Occuring is : "<< target<<endl;

    return 0;
}