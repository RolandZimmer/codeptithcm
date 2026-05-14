#include <bits/stdc++.h>
using namespace std;

struct ThiSinh {
    string hoTen, ngaySinh;
    float diem1, diem2, diem3, tong;
};

int main() {
    ThiSinh A;
    getline(cin, A.hoTen);
    getline(cin, A.ngaySinh);
    cin >> A.diem1 >> A.diem2 >> A.diem3;
    A.tong = A.diem1 + A.diem2 + A.diem3;
    cout << A.hoTen << " " << A.ngaySinh << " " << fixed << setprecision(1) << A.tong;
    return 0;
}
