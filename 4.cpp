#include <iostream>
using namespace std;

int main() {
    cout<<"Input_your_number: ";
    int n;
    cin>>n;
    int sum=0;
    int factorial=1;
    for(int i=1;i<=n;i++){
            factorial=factorial*i;
            sum=sum+factorial;
    }
    cout<<sum;
    return 0;
}