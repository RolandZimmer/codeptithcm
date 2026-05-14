#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream fin("VANBAN.in");
    set<string> A;
    string s;
    while (fin >> s) {
        for (char &c : s) c = tolower(c);
        A.insert(s);
    }
    for (string x : A) cout << x << "\n";
    return 0;
}
