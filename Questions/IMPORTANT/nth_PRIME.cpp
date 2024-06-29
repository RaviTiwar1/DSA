#include <bits/stdc++.h>
using namespace std;

int countPrimes(int a) {
    if (a == 1) return 2;
    int limit = 100;
    vector<int> primes;
    while (true) {                                   // loop chlta rhe jb tk 'a'th element tk prime na mile uske liye
        vector<bool> prime(limit + 1, true);
        prime[0] = prime[1] = false;

        for (int i = 2; i < limit; i++) {           // Sieve of Eratosthenes ---> Love babbar ke Math wale(24) video ko dekho
            if (prime[i]) {
                primes.push_back(i);

                for (int j = 2 * i; j < limit; j += i) {
                    prime[j] = false;
                }
            }
        }

        if (primes.size() >= a) break;                  // agar 'a' tk mil gya to wo  while (true) wala loop end kro
        limit *= 2;                                     // Dynamically increase limit
    }

    return primes[a-1];
}

int main() {
    int n;
    cout << "Enter the nth prime number you want: ";
    cin >> n;

    cout << "The " << n << "th prime number is: " << countPrimes(n) << endl;

    return 0;
}

