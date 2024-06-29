#include <bits/stdc++.h>
using namespace std;

bool isPresent(vector<vector<int>> matrix, int target, int rows, int cols)
{
    int start = 0;
    int end = rows * cols - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        int element = matrix[mid / cols][mid % cols]; // to find middle element

        if (element == target)
        {
            return true;
        }
        if (element < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return false;
}

int main()
{

    vector<vector<int>> matrix;

    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    for (int i = 0; i < rows; i++)
    {
        vector<int> row;
        for (int j = 0; j < cols; j++)
        {
            int element;
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> element;
            row.push_back(element);
        }
        matrix.push_back(row);
    }

   

    cout << endl
         << "The Matrix is:" << endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    int target;
    cout << "Enter the Element to be found: ";
    cin >> target;

    if (isPresent(matrix, target, rows, cols))
    {
        cout << "Element Present!";
    }
    else
    {
        cout << "Not Present";
    }

    

    //SWapping 

    for (int i = 0; i < rows; i++)
    {
        for (int j = i; j < cols; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    cout << endl
         << "After Swapping: " << endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    //for reversing

    for (int i = 0; i < rows; i++)
    {

        reverse(matrix[i].begin(), matrix[i].end());
    }

    cout << endl
         << "reversed matrix:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}


// row calculate krne k liye - int n = matrix.size()
// column calculate krne k liye - int m = matrix[0].size()