

//time limit exceed kr gai h isme 

#include<bits/stdc++.h>
using namespace std;
    double myPow(double x, int n) {
        double ans = 1.0;
        long a = labs(n);   //for absolute value of n(since in loop +ve value of n is used)

        for (long long int i = 0; i < a; i++) {
            ans = ans * x;
        }
        if(n>=0){
            return ans;
        }
        else{
            return 1/ans;
        }
    }
int main()
{
    double x;
    int n;
    cout<<"Enter the number:";
    cin>>x;
    cout<<"Enter the power:";
    cin>>n;

    cout<<"Output: "<<myPow(x,n);
 return 0;
}