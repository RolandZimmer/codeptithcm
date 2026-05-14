#include <bits/stdc++.h>
using namespace std;

struct NhanVien {
    string ma, hoTen, gioiTinh, ngaySinh, diaChi, maSoThue, ngayKy;
};

string keyNgay(string s) {
    return s.substr(6, 4) + s.substr(0, 2) + s.substr(3, 2);
}

int main() {
    int N;
    cin >> N;
    cin.ignore();
    vector<NhanVien> A(N);
    for (int i = 0; i < N; i++) {
        stringstream ss;
        ss << setw(5) << setfill('0') << i + 1;
        A[i].ma = ss.str();
        getline(cin, A[i].hoTen);
        getline(cin, A[i].gioiTinh);
        getline(cin, A[i].ngaySinh);
        getline(cin, A[i].diaChi);
        getline(cin, A[i].maSoThue);
        getline(cin, A[i].ngayKy);
    }
    sort(A.begin(), A.end(), [](NhanVien a, NhanVien b) {
        return keyNgay(a.ngaySinh) < keyNgay(b.ngaySinh);
    });
    for (NhanVien x : A)
        cout << x.ma << " " << x.hoTen << " " << x.gioiTinh << " " << x.ngaySinh << " " << x.diaChi << " " << x.maSoThue << " " << x.ngayKy << "\n";
    return 0;
}
