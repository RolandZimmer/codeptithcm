#include <bits/stdc++.h>
using namespace std;

struct SinhVien {
    string ma, hoTen, lop, email;
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
        getline(cin, A[i].email);
    }
    sort(A.begin(), A.end(), [](SinhVien a, SinhVien b) {
        if (a.lop != b.lop) return a.lop < b.lop;
        return a.ma < b.ma;
    });
    for (SinhVien x : A)
        cout << x.ma << " " << x.hoTen << " " << x.lop << " " << x.email << "\n";
    return 0;
}
