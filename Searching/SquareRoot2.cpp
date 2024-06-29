
// this is for any number

#include <bits/stdc++.h>
using namespace std;

long long int BinarySearch(int n)
{
    int s = 0;
    int e = n;
    long long int mid = s + (e - s) / 2;
    long long int ans = -1;

    while (s < e)
    {

        long long int square = mid * mid;
        if (square == n)
        {
            return mid;
        }
        else if (square < n)
        {
            s = mid + 1;
            ans = mid;
        }
        else
        {
            e = mid; // for square>n
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

double morePrecise(int n, int precision , int tempSol){
    double factor =1;
    double ans = tempSol;

    for(int i=0;i<precision;i++){
        factor=factor/10;

    for (double j = ans;j*j<n;j=j+factor){
        ans=j;
    }
    
    }
    return ans;
}

int main()
{
    int x,a;
    cout << "Enter the number:";
    cin >> x;
    int tempSol = BinarySearch(x);
    cout<<"Enter the decimal value upto which u want : ";
    cin>>a;


    cout << "Sqaure Root of " << x << " is " << morePrecise(x,a,tempSol);

    return 0;
}