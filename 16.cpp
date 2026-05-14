#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, s;
    cin >> m >> s;

    if ((s == 0 && m > 1) || s > 9 * m) {
        cout << "-1 -1";
        return 0;
    }
    if (m == 1 && s == 0) {
        cout << "0 0";
        return 0;
    }

    int t = s;
    string lon = "";
    for (int i = 0; i < m; i++) {
        int x = min(9, t);
        lon += char('0' + x);
        t -= x;
    }

    t = s - 1;
    string nho(m, '0');
    nho[0] = '1';
    for (int i = m - 1; i >= 0; i--) {
        int x = min(9, t);
        nho[i] += x;
        t -= x;
    }

    cout << nho << " " << lon;
    return 0;
}
