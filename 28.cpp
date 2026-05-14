#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        string N;
        cin >> N;
        int n = N.size(), vt = -1;
        for (int i = n - 2; i >= 0; i--) {
            if (N[i] > N[i + 1]) {
                vt = i;
                break;
            }
        }
        if (vt == -1) {
            cout << -1 << "\n";
            continue;
        }
        char c = '0';
        int pos = -1;
        for (int i = vt + 1; i < n; i++) {
            if (N[i] < N[vt] && N[i] > c) {
                c = N[i];
                pos = i;
            }
        }
        for (int i = vt + 1; i < pos; i++)
            if (N[i] == c) pos = i;
        swap(N[vt], N[pos]);
        if (N[0] == '0') cout << -1 << "\n";
        else cout << N << "\n";
    }
    return 0;
}
