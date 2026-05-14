#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        string S;
        cin >> S;
        long long dem[256] = {};
        for (char c : S) dem[(unsigned char)c]++;
        long long kq = 0;
        for (long long x : dem) kq += x * (x + 1) / 2;
        cout << kq << "\n";
    }
    return 0;
}
