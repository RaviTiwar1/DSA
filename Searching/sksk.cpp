
//to check absolute value of integer

#include<bits/stdc++.h>
using namespace std;
double square(double n){
   
        
     double s = 0;
        double e = n;
        double mid = s + (e - s) / 2;
        double ans = -1;

        while (s <= e) {

            double square = mid * mid;
            if (square == n) {
                ans=mid;
            } else if (square < n) {
                s = mid + 1;
                ans = mid;
            } else {
                e = mid - 1; // for square>n
            }
            mid = s + (e - s) / 2;
        }

        
        double factor=1;
        for(int i=0;i<3;i++){
            factor=factor/10;

            for(double j=ans;j*j<n;j=j+factor){
                ans=j;
            }
        }

        return ans;
}




int main()
{

    double n;
    cout<<"Enter value: ";
    cin>>n;
    cout<<"ans is "<<square(n);



 return 0;
}