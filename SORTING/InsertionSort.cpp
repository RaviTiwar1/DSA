#include <bits/stdc++.h>
using namespace std;
void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
            
                arr[j + 1] = arr[j];
                
            }
            else
            {
                break;
            }
        }
        cout<<j<<endl;
        arr[j+1] = temp;  
    }
}                                                 //TC - O(n^2) ---- best- O(n),  worst - O(n^2)

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

    insertionSort(arr, size);
    cout << "Sorted array is: ";
    for (int i = 0; i < size; i++)
    {
        cout << " " << arr[i];
    }

    return 0;
}