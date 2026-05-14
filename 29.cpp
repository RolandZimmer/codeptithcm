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
        long long tong = 0, x = 0;
        for (char c : S) {
            if (isdigit(c)) x = x * 10 + c - '0';
            else {
                tong += x;
                x = 0;
            }
        }
        tong += x;
        cout << tong << "\n";
    }
    return 0;
}
