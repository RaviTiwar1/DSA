#include<bits/stdc++.h>
using namespace std;

bool isPresent(int arr[][3], int val, int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==val){
                return 1;
            }
        }
    }
    return 0;
}

void rowSum(int arr[][3], int n, int m){
    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=0;j<m;j++){
            sum += arr[i][j];
        }
        cout<<"The "<<i<<"th Row sum is: "<<sum<<endl;
    }
}

void columnSum(int arr[][3], int n, int m){
    for(int j=0;j<m;j++){
        int sum = 0;
        for(int i=0;i<n;i++){
            sum += arr[i][j];
        }
        cout<<"The "<<j<<"th Column sum is: "<<sum<<endl;
    }
}


int main()
{
    int arr[3][3];
    cout<<"Enter the matrix elements: ";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"The matrix is: "<<endl;
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int val;
    cout<<"Enter the element to find: ";
    cin>>val;

    if(isPresent(arr,val,3,3)){
        cout<<"Element found!"<<endl;
    }
    else{
         cout<<"Element not found!"<<endl;
    }

    rowSum(arr,3,3);







 return 0;
}
