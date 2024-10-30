#include <bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++) // n-i kyuki harr round k baad last wala sort ho jaega to nxt loop ek baar km chlega last time se
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
}

 // TC-- O(n^2)  ---- best case -> O(n)--- already sorted
  //                   worst case -> reverse sorted ho
 // SC-  O(1)

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

    bubbleSort(arr, size);
    cout << endl
         << "Sorted array is:";
    for (int i = 0; i < size; i++)
    {
        cout << " " << arr[i];
    }

    return 0;
}