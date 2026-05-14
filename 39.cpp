#include <bits/stdc++.h>
using namespace std;

struct SinhVien {
    string ma, hoTen, lop;
    double d1, d2, d3;
};

int main() {
    int N;
    cin >> N;
    cin.ignore();
    vector<SinhVien> A(N);
    for (int i = 0; i < N; i++) {
        getline(cin, A[i].ma);
        getline(cin, A[i].hoTen);
        getline(cin, A[i].lop);
        cin >> A[i].d1 >> A[i].d2 >> A[i].d3;
        cin.ignore();
    }
    sort(A.begin(), A.end(), [](SinhVien a, SinhVien b) {
        return a.hoTen < b.hoTen;
    });
    cout << fixed << setprecision(1);
    for (SinhVien x : A)
        cout << x.ma << " " << x.hoTen << " " << x.lop << " " << x.d1 << " " << x.d2 << " " << x.d3 << "\n";
    return 0;
}
