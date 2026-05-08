#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Your_test_number:";
    cin >> n;

    char arr[10000];

    for (int i = 0; i < n; i++) {
        cout << "Enter_your_letter: ";
        cin >> arr[i];
    }

    for (int j = 0; j < n; j++) {
        if (arr[j] >= 'A' && arr[j] <= 'Z') {
            arr[j] = arr[j] + 32;
        }
        else if (arr[j] >= 'a' && arr[j] <= 'z') {
            arr[j] = arr[j] - 32;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}