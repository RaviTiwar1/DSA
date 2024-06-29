#include<bits/stdc++.h>
using namespace std;

vector<int> reverse(vector<int> v){
    int s=0,e=v.size()-1;               //agar koi particular value k baad reverse krna h to s=(wo value le lena)
    while(s<=e){
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}


int main()
{

    vector<int> v;
    v.push_back(11);
    v.push_back(7);
    v.push_back(3);
    v.push_back(12);
    v.push_back(4);

    cout<<"Array before reverse: ";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    vector<int> ans = reverse(v);

    cout<<"Array after reverse: ";
    for(int i=0;i<v.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

 return 0;
}