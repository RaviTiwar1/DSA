#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(a==0)
    return b;

    if(b==0)
    return a;

    while(a!=b){
        if(a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
                                        // see babbar Math video Euclid Algo for different process
    return a;                           
}

int main()
{
    int a,b;
    cout<<"Enter the Elements:"<<endl;
    cout<<"A: ";
    cin>>a;
    cout<<"B: ";
    cin>>b;

    //cout<<"GCD of the numbers is: "<<gcd(a,b);
    cout<<"GCD of the numbers is: "<<__gcd(a,b);        // STL function for GCD



 return 0;
}