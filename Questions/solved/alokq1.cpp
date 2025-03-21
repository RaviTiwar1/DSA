#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> s(N);
        for (int i = 0; i < N; ++i) {
            cin >> s[i];
        }
        int K;
        cin >> K;
        sort(s.begin(), s.end());
        long long sum = 0;
        for (int i = 0; i < K; ++i) {
            sum += s[i] * (i + 1);
        }
        cout << sum << '\n';
    }
    return 0;
}