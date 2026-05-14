#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        set<int> A, B, hop, giao;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            A.insert(x);
            hop.insert(x);
        }
        for (int i = 0; i < m; i++) {
            int x;
            cin >> x;
            B.insert(x);
            hop.insert(x);
        }
        for (int x : A)
            if (B.count(x)) giao.insert(x);
        for (int x : hop) cout << x << " ";
        cout << "\n";
        for (int x : giao) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
