#include <iostream>
using namespace std;

int gcd(int a, int b) {
  if (b == 0)
    return a;
  return gcd(b, a % b);         // Euclid Algorithm
}

int main() {
  int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
  int n = sizeof(arr) / sizeof(arr[0]);
  int result = arr[0];
  for (int i = 1; i < n; i++)
    result = gcd(arr[i], result);

  cout << "The GCD of the 10 numbers is " << result << endl;
  return 0;
}


// see babbar Math video Euclid Algo for different process
