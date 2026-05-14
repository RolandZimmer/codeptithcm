#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        string S, chu = "";
        cin >> S;
        int tong = 0;
        for (char c : S) {
            if (isdigit(c)) tong += c - '0';
            else chu += c;
        }
        sort(chu.begin(), chu.end());
        cout << chu << tong << "\n";
    }
    return 0;
}
