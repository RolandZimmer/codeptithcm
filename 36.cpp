#include <bits/stdc++.h>
using namespace std;

struct SinhVien {
    string ma, hoTen, lop, ngaySinh;
    float gpa;
};

string chuanHoaTen(string s) {
    stringstream ss(s);
    string w, kq = "";
    while (ss >> w) {
        for (char &c : w) c = tolower(c);
        w[0] = toupper(w[0]);
        if (!kq.empty()) kq += " ";
        kq += w;
    }
    return kq;
}

string chuanHoaNgay(string s) {
    stringstream ss(s);
    string d, m, y;
    getline(ss, d, '/');
    getline(ss, m, '/');
    getline(ss, y, '/');
    if (d.size() == 1) d = "0" + d;
    if (m.size() == 1) m = "0" + m;
    return d + "/" + m + "/" + y;
}

int main() {
    int N;
    cin >> N;
    cin.ignore();
    vector<SinhVien> A(N);
    for (int i = 0; i < N; i++) {
        stringstream ss;
        ss << "B20DCCN" << setw(3) << setfill('0') << i + 1;
        A[i].ma = ss.str();
        getline(cin, A[i].hoTen);
        getline(cin, A[i].lop);
        getline(cin, A[i].ngaySinh);
        cin >> A[i].gpa;
        cin.ignore();
        A[i].hoTen = chuanHoaTen(A[i].hoTen);
        A[i].ngaySinh = chuanHoaNgay(A[i].ngaySinh);
    }
    sort(A.begin(), A.end(), [](SinhVien a, SinhVien b) {
        return a.gpa > b.gpa;
    });
    for (SinhVien x : A)
        cout << x.ma << " " << x.hoTen << " " << x.lop << " " << x.ngaySinh << " " << fixed << setprecision(2) << x.gpa << "\n";
    return 0;
}
