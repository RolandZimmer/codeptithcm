#include <bits/stdc++.h>
using namespace std;

class NhanVien {
public:
    string ma, hoTen, gioiTinh, ngaySinh, diaChi, maSoThue, ngayKy;
    static int dem;
    friend istream& operator >> (istream& in, NhanVien &a) {
        stringstream ss;
        ss << setw(5) << setfill('0') << ++dem;
        a.ma = ss.str();
        in >> ws;
        getline(in, a.hoTen);
        getline(in, a.gioiTinh);
        getline(in, a.ngaySinh);
        getline(in, a.diaChi);
        getline(in, a.maSoThue);
        getline(in, a.ngayKy);
        return in;
    }
    friend ostream& operator << (ostream& out, NhanVien a) {
        out << a.ma << " " << a.hoTen << " " << a.gioiTinh << " " << a.ngaySinh << " " << a.diaChi << " " << a.maSoThue << " " << a.ngayKy;
        return out;
    }
};

int NhanVien::dem = 0;

int main() {
    int N;
    cin >> N;
    vector<NhanVien> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];
    for (NhanVien x : A) cout << x << "\n";
    return 0;
}
