#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        unordered_map<int, int> A;
        for (int i = 0; i < N; i++) {
            int x;
            cin >> x;
            A[x]++;
        }
        long long dem = 0;
        for (auto p : A)
            if (p.second > 1) dem += p.second;
        cout << dem << "\n";
    }
    return 0;
}
