#include <bits/stdc++.h>
using namespace std;

struct SinhVien {
    string ma, hoTen, lop, email;
};

string vietHoa(string s) {
    for (char &c : s) c = toupper(c);
    return s;
}

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
    map<string, string> maNganh;
    maNganh["KE TOAN"] = "DCKT";
    maNganh["CONG NGHE THONG TIN"] = "DCCN";
    maNganh["AN TOAN THONG TIN"] = "DCAT";
    maNganh["VIEN THONG"] = "DCVT";
    maNganh["DIEN TU"] = "DCDT";

    int Q;
    cin >> Q;
    cin.ignore();
    while (Q--) {
        string nganh;
        getline(cin, nganh);
        string ten = vietHoa(nganh);
        string ma = maNganh[ten];
        cout << "DANH SACH SINH VIEN NGANH " << ten << ":\n";
        for (SinhVien x : A) {
            string s = x.ma.substr(3, 4);
            if (s == ma) {
                if ((ma == "DCCN" || ma == "DCAT") && x.lop[0] == 'E') continue;
                cout << x.ma << " " << x.hoTen << " " << x.lop << " " << x.email << "\n";
            }
        }
    }
    return 0;
}
