#include <bits/stdc++.h>
using namespace std;

struct NhanVien {
    string ma, hoTen, gioiTinh, ngaySinh, diaChi, maSoThue, ngayKy;
};

int main() {
    NhanVien A;
    A.ma = "00001";
    getline(cin, A.hoTen);
    getline(cin, A.gioiTinh);
    getline(cin, A.ngaySinh);
    getline(cin, A.diaChi);
    getline(cin, A.maSoThue);
    getline(cin, A.ngayKy);
    cout << A.ma << " " << A.hoTen << " " << A.gioiTinh << " " << A.ngaySinh << " " << A.diaChi << " " << A.maSoThue << " " << A.ngayKy;
    return 0;
}
