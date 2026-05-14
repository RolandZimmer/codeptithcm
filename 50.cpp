#include <bits/stdc++.h>
using namespace std;

set<string> docFile(string ten) {
    ifstream fin(ten);
    set<string> A;
    string s;
    while (fin >> s) {
        for (char &c : s) c = tolower(c);
        A.insert(s);
    }
    return A;
}

int main() {
    set<string> A = docFile("DATA1.in");
    set<string> B = docFile("DATA2.in");
    set<string> hop, giao;
    for (string x : A) hop.insert(x);
    for (string x : B) {
        hop.insert(x);
        if (A.count(x)) giao.insert(x);
    }
    for (string x : hop) cout << x << " ";
    cout << "\n";
    for (string x : giao) cout << x << " ";
    return 0;
}
