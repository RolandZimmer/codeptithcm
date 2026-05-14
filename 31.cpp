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
        set<int> hop, giao, A;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            A.insert(x);
            hop.insert(x);
        }
        for (int i = 0; i < m; i++) {
            int x;
            cin >> x;
            if (A.count(x)) giao.insert(x);
            hop.insert(x);
        }
        for (int x : hop) cout << x << " ";
        cout << "\n";
        for (int x : giao) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
