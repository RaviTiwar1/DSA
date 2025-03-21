#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    int n = v.size();

   // priority_queue<int> maxi;
    // for (int i = 0; i < n; i++)
    // {
    //     maxi.push(v[i]);
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << maxi.top() << " ";
    //     maxi.pop();
    // }
    // cout << endl;
        

     priority_queue<int, vector<int>, greater<int>> mini;

      
        for (int i = 0, j = 1; j < v.size(); i++, j++) {
            mini.push(v[i]/v[j]);
           
        }
        int a = mini.size();

     for(int n=0;n<a;n++){
        cout<<mini.top()<<" ";
        mini.pop();
    }cout<<endl;


    cout << endl;
    return 0;
}
// Time Complexity: O(nlogn)
// Space Complexity: O(n)  
