#include <iostream>
using namespace std;
#include <set>

int main() {
    int T,n;
    int arr[i];
    set <int> s;
    cin>>T;
    for(int i=0;i<T;i++){
        cin>>n;
        for(int j=0;j<n;j++){
            cin>>arr[j];
            s.insert(arr[j]);
        }
    }
    int x=1;
    while(s.count(x)){
        x++;
    }
    cout<<x;
    return 0;
}
