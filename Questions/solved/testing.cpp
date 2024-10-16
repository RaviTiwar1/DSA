#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int max_len = 1, current_len = 1;

    // Traverse the array and calculate the maximum length of a non-decreasing subarray
    for (int i = 1; i < N; i++) {
        if (A[i] >= A[i - 1]) {
            current_len++;
        } else {
            max_len = max(max_len, current_len);
            current_len = 1;  // Reset the current length for a new subarray
        }
    }
    
    max_len = max(max_len, current_len);

    // Now, check for possible single operations to merge and increase the non-decreasing length.
    for (int i = 1; i < N - 1; i++) {
        if (A[i - 1] <= A[i + 1]) {
            max_len = max(max_len, current_len + 1);  // Consider merging at this point
        }
    }

    cout << max_len << endl;

    return 0;
}