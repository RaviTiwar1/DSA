#include <bits/stdc++.h>
using namespace std;
int main()
{
                     
    //max heap
    priority_queue<int> maxi;

   

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(4);

    int n = maxi.size();

    //in this maximum to minimum will be stored 

    cout<<"This is a max heap: ";
    for(int i=0;i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }cout<<endl;




     //min heap
    priority_queue<int, vector<int>, greater<int> > mini;

    mini.push(4);
    mini.push(1);
    mini.push(3);
    mini.push(2);

    int m = mini.size();

    //in this minimum to maximum will be stored

    cout<<"This is a min heap: ";
    for(int i=0;i<m;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }cout<<endl;




 return 0;
}