#include <bits/stdc++.h>
#include <deque>
using namespace std;
int main()
{

    deque<int> d; // deque is doubly ended queue that means we can do insertion and deletion from both the ends
    d.push_back(1);
    d.push_front(2);

    for (auto i : d)
    {
        cout << i << " ";
    }
    d.pop_front();
    cout << endl;

    for (auto i : d)
    {
        cout << i << " ";
    }

    return 0;
}