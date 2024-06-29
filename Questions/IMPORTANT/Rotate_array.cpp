#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int> &v, int k)
{
    vector<int> temp(v.size());

    for (int i = 0; i < v.size(); i++)
    {
        temp[(i + k) % v.size()] = v[i];
    }

    v = temp;
    cout << "Rotated array: ";

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{

    vector<int> v;
    cout << "Original Array: ";
    v.push_back(11);
    v.push_back(7);
    v.push_back(3);
    v.push_back(12);
    v.push_back(4);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    int target;

    cout << "Enter the value afer which array is rotated: ";
    cin >> target;

    rotate(v, target);
    return 0;
}