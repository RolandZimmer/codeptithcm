#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        string S, st = "";
        cin >> S;
        vector<int> vt;
        int kq = 0;
        for (int i = 0; i < (int)S.size(); i++) {
            st += S[i];
            vt.push_back(i);
            int n = st.size();
            if (n >= 3 && st.substr(n - 3) == "100") {
                int l = vt[n - 3];
                st.erase(n - 3);
                vt.resize(n - 3);
                kq = max(kq, i - l + 1);
            }
        }
        cout << kq << "\n";
    }
    return 0;
}
