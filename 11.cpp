#include <iostream>
using namespace std;

int arr[10000];
int ans[10][10000];
int len[10];

int main() {
    int T, n, d;
    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> n >> d;
        len[i] = n;

        for (int j = 0; j < n; j++) {
            cin >> arr[j];
        }

        int k = 0;

        for (int j = d; j < n; j++) {
            ans[i][k] = arr[j];
            k++;
        }

        for (int j = 0; j < d; j++) {
            ans[i][k] = arr[j];
            k++;
        }
    }

    for (int i = 0; i < T; i++) {
        for (int j = 0; j < len[i]; j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
