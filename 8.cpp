#include <iostream>
using namespace std;
#include <vector>
bool isPrime(int n) {
    if(n < 2) return false;
    for(int i = 2; i*i <= n; i++)
        if(n % i == 0) return false;
    return true;
}

int main() {
    int T;
    cin >> T;
    vector <int> a(T);
    if(T < 1 || T > 100) return 0;
    for(int i=0;i<T;i++){
        cin>>a[i];
    }
    for(int k=0;k<T;k++){
        int N=a[k];
        bool first=true;
        for(int i=0;i*i<=N;i++){
            if(isPrime(i)){
                if(!first) cout<<" ";
                cout<<i*i;
                first=false;
            }
        }
        cout<<endl;
    }
    return 0;
}
