#include <iostream>
using namespace std;
#include <climits>
#include <set>

int main() {
    int T;
    int A[100000];
    int ans[10];
    cin >> T;

    if (T <= 10 && T >= 1) {
        for (int tc = 0; tc < T; tc++) {
            int N;
            cin >> N;

            set<int> s;

            if (N >= 1 && N <= 100000) {
                for (int i = 0; i < N; i++) {
                    cin >> A[i];
                    if (A[i] >= 0 && A[i] <= 1000000000) {
                        s.insert(A[i]);
                    }
                }
            }

            if (s.size() < 2) {
                ans[tc] = 0;
            } else {
                auto it = s.begin();
                int prev = *it;
                ++it;

                int minDiff = INT_MAX;
                for (; it != s.end(); ++it) {
                    minDiff = min(minDiff, *it - prev);
                    prev = *it;
                }

                ans[tc] = minDiff;
            }
        }

        for (int tc = 0; tc < T; tc++) {
            cout << ans[tc] << endl;
        }
    }

    return 0;
}
