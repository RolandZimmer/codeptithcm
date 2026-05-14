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
        int l = 0, r = n - 1, dem = 0;
        while (l < r) {
            if (A[l] == A[r]) {
                l++;
                r--;
            } else if (A[l] < A[r]) {
                A[l + 1] += A[l];
                l++;
                dem++;
            } else {
                A[r - 1] += A[r];
                r--;
                dem++;
            }
        }
        cout << dem << "\n";
    }
    return 0;
}
