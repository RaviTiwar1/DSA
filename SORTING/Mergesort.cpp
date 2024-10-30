#include <bits/stdc++.h>
using namespace std;                               //TC- O(nlogn)  --> all cases

void merge(int *arr, int s, int e)
{
    int mid = s + (e - s) / 2;

    int len1 = mid + 1 - s;
    int len2 = e - mid;

    int *first = new int[len1];   // pehla array ye bnae h 
    int *second = new int[len2];       // dusra array ye h

    // pehle array me values copy kr rhe 
    int k=s;
    for(int i=0;i<len1;i++){
        first[i]=arr[k++];
    }

    // second array me values copy kr rhe 
    k=mid+1;
    for(int i=0;i<len2;i++){
        second[i]=arr[k++];
    }

    // merging both array

    int index1=0;
    int index2=0;
    int mainArrayindex = s;

    while(index1<len1 && index2<len2 ){
        if(first[index1]<second[index2]){
            arr[mainArrayindex++] = first[index1++];
        }else{
            arr[mainArrayindex++] = second[index2++];
        }
    }

    while(index1<len1){
         arr[mainArrayindex++] = first[index1++];
    }

    while(index2<len2){
         arr[mainArrayindex++] = second[index2++];
    }


    //to avoid memory leakage
    delete []first;
    delete []second;

}

void mergeSort(int *arr, int start, int end)
{

    // base case
    if (start >= end)
    {
        return;
    }

    int mid = start + (end - start) / 2;

    // left side ko sort krne k liye
    mergeSort(arr, start, mid);

    // right side sort krne k liye
    mergeSort(arr, mid + 1, end);

    // dono ko merge krne k liye
    merge(arr, start, end);
}

int main()
{
    int size;
    cout << "Enter the size of the Array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the Values of Array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << endl
         << "Original array is:";
    for (int i = 0; i < size; i++)
    {
        cout << " " << arr[i];
    }

    mergeSort(arr, 0, size - 1);
    cout << endl
         << "Sorted array is:";
    for (int i = 0; i < size; i++)
    {
        cout << " " << arr[i];
    }
    return 0;
}