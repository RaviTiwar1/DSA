#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    int fat = 1;
    for (int i = 2; i <= n; i++)
    {
        int temp = 0;
        for (int j = 0; j < i; j++)
        {
            temp += fat;
        }
        fat = temp;
    }
    return fat;
}
int main()
{
    int n;
    cin >> n;

    cout << "Factorial of " << n << " is " << fact(n);
    return 0;
}