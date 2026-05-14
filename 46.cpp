#include <bits/stdc++.h>
using namespace std;

struct DoanhNghiep {
    string ma, ten;
    int soLuong;
};

int main() {
    int N;
    cin >> N;
    cin.ignore();
    vector<DoanhNghiep> A(N);
    for (int i = 0; i < N; i++) {
        getline(cin, A[i].ma);
        getline(cin, A[i].ten);
        cin >> A[i].soLuong;
        cin.ignore();
    }
    sort(A.begin(), A.end(), [](DoanhNghiep a, DoanhNghiep b) {
        if (a.soLuong != b.soLuong) return a.soLuong > b.soLuong;
        return a.ma < b.ma;
    });
    for (DoanhNghiep x : A)
        cout << x.ma << " " << x.ten << " " << x.soLuong << "\n";
    return 0;
}
