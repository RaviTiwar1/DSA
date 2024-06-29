#include<bits/stdc++.h>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int arr3[]){
    int i=0, j=0;
    int k=0;

    while(i<n && j<m){
       if(arr1[i]<arr2[j]){
        arr3[k++]=arr1[i++];
       }
       else{
        arr3[k++]= arr2[j++];
       }
    }


    // agar koi element pehle array me bach gya to usko copy krne me kaam aeega


    while (i<n)     
    {
        arr3[k++]=arr1[i++];
    }

    //agar second array me reh gya to uske liye ye 
    while(j<m){
        arr3[k++]=arr2[j++];
    }
    
}


void print(int ans[], int n){
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

}






int main()
{

    int arr1[5]={1,3,4,6,8};
    int arr2[3]={2,5,7};

    int arr3[8]={0};

    merge(arr1,5,arr2,3,arr3);

    print(arr3,8);
 return 0;
}