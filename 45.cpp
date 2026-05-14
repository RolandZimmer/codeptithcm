#include <bits/stdc++.h>
using namespace std;

struct GiangVien {
    string ma, hoTen, boMon, vietTat;
};

string lowerString(string s) {
    for (char &c : s) c = tolower(c);
    return s;
}

string vietTat(string s) {
    stringstream ss(s);
    string w, kq = "";
    while (ss >> w) kq += toupper(w[0]);
    return kq;
}

int main() {
    int N;
    cin >> N;
    cin.ignore();
    vector<GiangVien> A(N);
    for (int i = 0; i < N; i++) {
        stringstream ss;
        ss << "GV" << setw(2) << setfill('0') << i + 1;
        A[i].ma = ss.str();
        getline(cin, A[i].hoTen);
        getline(cin, A[i].boMon);
        A[i].vietTat = vietTat(A[i].boMon);
    }
    int Q;
    cin >> Q;
    cin.ignore();
    while (Q--) {
        string tuKhoa;
        getline(cin, tuKhoa);
        cout << "DANH SACH GIANG VIEN THEO TU KHOA " << tuKhoa << ":\n";
        string q = lowerString(tuKhoa);
        for (GiangVien x : A)
            if (lowerString(x.hoTen).find(q) != string::npos)
                cout << x.ma << " " << x.hoTen << " " << x.vietTat << "\n";
    }
    return 0;
}
