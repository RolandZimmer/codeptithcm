#include <bits/stdc++.h>
using namespace std;

struct Nguoi {
    string ten, ngaySinh;
};

string keyNgay(string s) {
    return s.substr(6, 4) + s.substr(3, 2) + s.substr(0, 2);
}

int main() {
    int N;
    cin >> N;
    vector<Nguoi> A(N);
    for (int i = 0; i < N; i++) cin >> A[i].ten >> A[i].ngaySinh;
    sort(A.begin(), A.end(), [](Nguoi a, Nguoi b) {
        return keyNgay(a.ngaySinh) < keyNgay(b.ngaySinh);
    });
    cout << A.back().ten << "\n" << A.front().ten;
    return 0;
}
