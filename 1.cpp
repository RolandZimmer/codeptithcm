#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long result[1000];

    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        result[i] = x * (x + 1) / 2;
    }

    for (int i = 0; i < n; i++) {
        cout << result[i] << endl;
    }

    return 0;
}