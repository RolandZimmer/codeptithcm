#include <bits/stdc++.h>
using namespace std;

struct SinhVien {
    string ma, hoTen, lop, email;
};

int main() {
    vector<SinhVien> A;
    SinhVien x;
    while (getline(cin, x.ma)) {
        if (x.ma.empty()) continue;
        getline(cin, x.hoTen);
        getline(cin, x.lop);
        getline(cin, x.email);
        A.push_back(x);
    }
    sort(A.begin(), A.end(), [](SinhVien a, SinhVien b) {
        return a.ma < b.ma;
    });
    for (SinhVien x : A)
        cout << x.ma << " " << x.hoTen << " " << x.lop << " " << x.email << "\n";
    return 0;
}
