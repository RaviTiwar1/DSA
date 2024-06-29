#include <bits/stdc++.h>
using namespace std;

void selectSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
            
        }
        swap(arr[minIndex], arr[i]);
    }
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
    
    selectSort(arr,size);
    cout << "Sorted array is: ";
    for (int i = 0; i < size; i++)
    {
        cout <<" "<< arr[i];
    }

    return 0;
}