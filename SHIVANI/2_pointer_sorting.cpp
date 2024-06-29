#include<iostream>
#include<string.h>
using namespace std;

void printingArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


void first_sort(int arr[],int n){
    int left=0;                      //this is the leftmost value of array
    int right=n-1;                   //this is the rightmost value of array
    while(left<right){                    // jabtak left k value right se chotta hoga tab tak ghumega
        while(arr[left]==0 && left<right){      //agar 0 hua left most value tho aage badho
            left++;
        }
        while(arr[right]==2 && left<right){    //agar 1 hua rightmost k value tho left ko aage badho
            right--;
        }
        if(arr[right]==2 && arr[right+1]==1 && left<right){
            swap(arr[right],arr[right+1]);
            right--;
        }
        if(arr[left]==1 && arr[left+1]==0 && left<right){
            swap(arr[left],arr[left+1]);
            left++;
        }
        if(arr[left]==2 && arr[right]==0 && left<right){    //agar left mein 1 aur right mein 0 h tho swap kardo
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
    }

  
}

int main(){
    int arr[9]={2,2,0,1,0,0,2,1,0};
    cout<<"Initial Array: ";
    printingArray(arr,9);
    first_sort(arr,9);
    cout<<"Sorted Array: ";
    printingArray(arr,9);
}