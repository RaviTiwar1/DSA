
// this is for only integer values whose sqaure root is a whole number like 36, 25 ,etc

#include <bits/stdc++.h>
using namespace std;

long long int BinarySearch(int n)
{
    int s = 0;
    int e = n;
    long long int mid = s + (e - s) / 2;
    long long int ans = -1;

    while (s < e)
    {

        long long int square = mid * mid;
        if (square == n)
        {
            return mid;
        }
        else if (square < n)
        {
            s = mid + 1;
            ans = mid;
        }
        else
        {
            e = mid; // for square>n
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int x;
    cout << "Enter the number:";
    cin >> x;
    cout << "Sqaure Root of " << x << " is " << BinarySearch(x);

    return 0;
}