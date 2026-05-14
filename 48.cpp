#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream fin("DATA.in");
    map<int, int> A;
    int x;
    while (fin >> x) A[x]++;
    for (auto p : A) cout << p.first << " " << p.second << "\n";
    return 0;
}
