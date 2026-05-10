#include <iostream>
using namespace std;
#include <vector>
bool laSoNguyenTo(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int T;
    cin >> T;

    if (T < 1 || T > 100) return 0;

    vector<int> a(T);
    for (int i = 0; i < T; i++) {
        cin >> a[i];
    }

    for (int k = 0; k < T; k++) {
        int N = a[k];

        if (N < 1 || N > 1000000) {
            cout << '\n';
            continue;
        }

        bool first = true;
        for (int i = 2; i * i <= N; i++) {
            if (laSoNguyenTo(i)) {
                if (!first) cout << ' ';
                cout << i * i;
                first = false;
            }
        }
        cout << '\n';
    }

    return 0;
}
