#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    string nguyenAm = "aeiouy";
    for (char c : S) {
        c = tolower(c);
        if (nguyenAm.find(c) == string::npos) cout << "." << c;
    }
    return 0;
}
