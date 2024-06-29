#include<bits/stdc++.h>
using namespace std;

int Binarysearch(int arr[],int size,int x){
    int start=0;
    int end=size-1;

    int mid=(start+end)/2;   //s + (e - s) /2

    while(start<=end){
        if(arr[mid]==x){
            return mid;
        }

        if(arr[mid]<x){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
        
    }
    return -1;
}

int main()
{
    int even[6]={2,3,5,7,9,12};
    int odd[5]={1,3,6,8,11};
    int index = Binarysearch(even,6,3);

    cout<<"The index of 3 is "<< index <<endl;

    int index1 = Binarysearch(odd,5,8);

    cout<<"The index of 8 is "<< index1 <<endl;

 return 0;
}