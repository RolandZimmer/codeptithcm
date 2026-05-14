#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        bool co[10] = {};
        for (int i = 0; i < n; i++) {
            string x;
            cin >> x;
            for (char c : x) co[c - '0'] = true;
        }
        for (int i = 0; i <= 9; i++)
            if (co[i]) cout << i << " ";
        cout << "\n";
    }
    return 0;
}
