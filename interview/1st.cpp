#include<bits/stdc++.h>
using namespace std;

void zeroToEnd(int arr[], int n){
        int s=0;
        for(int j=0;j<n;j++){
            if(arr[j]!=0){
                arr[s++] =arr[j];
            }
        }
        while(s<n){
            arr[s++]=0;
        }

    
}

int main()
{

    int arr[]={0,0,0,0,0,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    zeroToEnd(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

 return 0;
}

