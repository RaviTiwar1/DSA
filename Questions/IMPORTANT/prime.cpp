#include <bits/stdc++.h>
using namespace std;


// Sieve of Eratosthenes            ---> Love<3 babbar ke Math wale video ko dekho


//to find number of  prime under n


// int countPrimes(int n) {
//         int count = 0;
//         vector<bool> prime(n + 1, true);
//         prime[0] = prime[1] = false;

//         for (int i = 2; i < n; i++) {
//             if (prime[i]) {
//                 count++;

//                 for (int j = 2 * i; j < n; j = j + i) {
//                     prime[j] = false;
//                 }
//             }
//         }
//         return count;
//     }

bool isPrime(int n)
{
    if (n == 1)
    {
        return false;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {                                   // time complexity according to this approach O(n)
            return false;
        }
    }
    return true;
}

int main()
{

    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isPrime(n))
    {
        cout << "It is a Prime Number" << endl;
    }
    else
    {
        cout << "It is not a Prime Number" << endl;
    }

    return 0;
}