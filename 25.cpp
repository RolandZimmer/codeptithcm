#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> A(n, vector<int>(m));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> A[i][j];

        int tren = 0, duoi = n - 1, trai = 0, phai = m - 1;
        while (tren < duoi && trai < phai) {
            int truoc = A[tren + 1][trai];
            for (int j = trai; j <= phai; j++) swap(A[tren][j], truoc);
            tren++;
            for (int i = tren; i <= duoi; i++) swap(A[i][phai], truoc);
            phai--;
            for (int j = phai; j >= trai; j--) swap(A[duoi][j], truoc);
            duoi--;
            for (int i = duoi; i >= tren; i--) swap(A[i][trai], truoc);
            trai++;
        }

        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cout << A[i][j] << " ";
        cout << "\n";
    }
    return 0;
}
