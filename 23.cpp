#include <bits/stdc++.h>
using namespace std;

class PhanSo {
public:
    long long tu, mau;
    void rutgon() {
        long long g = __gcd(tu, mau);
        tu /= g;
        mau /= g;
    }
};

int main() {
    PhanSo p, q, r;
    cin >> p.tu >> p.mau >> q.tu >> q.mau;
    r.tu = p.tu * q.mau + q.tu * p.mau;
    r.mau = p.mau * q.mau;
    r.rutgon();
    cout << r.tu << "/" << r.mau;
    return 0;
}
