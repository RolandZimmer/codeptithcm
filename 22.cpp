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
    PhanSo p;
    cin >> p.tu >> p.mau;
    p.rutgon();
    cout << p.tu << "/" << p.mau;
    return 0;
}
