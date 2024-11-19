#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int s, int e){
    int pivot = arr[s];

    //to count the number of number less than pivot so that we can place the pivot at right place
    int count =0;
    for(int i = s+1;i<=e;i++){
        if(arr[i] <= pivot){
            count++;
        }
    }

    //place pivot at right position
    int pivotIndex = s + count;
    swap(arr[pivotIndex], arr[s]);

    // left and right wala part sambhaal rha

    int i = s, j=e;
    while( i< pivotIndex && j> pivotIndex){
        while(arr[i] < pivot){
            i++;
        }

        while(arr[j] > pivot){
            j--;
        }

        if(i< pivotIndex && j> pivotIndex){
            swap(arr[i++], arr[j--]);
        }

        
    }

    return pivotIndex;


}

void quickSort(int arr[], int s, int e){
    //base case
    if(s>=e){
        return;
    }

    //partition krna h 
    int p=partition(arr, s, e);

    //left part sort krenge 
    quickSort(arr, s, p-1);

    //right part k liye
    quickSort(arr, p+1, e);
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

    quickSort(arr, 0, size-1);             //function call
    cout << endl
         << "Sorted array is:";
    for (int i = 0; i < size; i++)
    {
        cout << " " << arr[i];
    }
 return 0;
}