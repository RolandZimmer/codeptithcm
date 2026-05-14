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
        vector<int> A(n);
        for (int &x : A) cin >> x;
        sort(A.begin(), A.end());
        int l = 0, r = n - 1;
        while (l <= r) {
            cout << A[r--] << " ";
            if (l <= r) cout << A[l++] << " ";
        }
        cout << "\n";
    }
    return 0;
}
