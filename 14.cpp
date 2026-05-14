#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    set<int> A;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        A.insert(x);
    }
    for (int x : A) cout << x << " ";
    return 0;
}
