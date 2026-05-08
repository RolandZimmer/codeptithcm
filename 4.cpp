#include <iostream>
using namespace std;
#include <cmath>
bool Isbalanced(int x){
    int evencount=0;
    int oddcount=0;
    while(x>0){
        int digit=x%10;
        if(digit%2==0){
            evencount++;
        }
        else {
            oddcount++;
        }
        x=x/10;
    }
    return evencount==oddcount;
}

int main() {
    cout<<"Input_your_number: ";
    int n;
    cin>>n;
    int count=0;
    int start=pow(10,n-1);
    int end=pow(10,n)-1;
    for(int i=start;i<=end;i++){
        if(Isbalanced(i)){
            cout<< i <<" ";
            count++;
            if(count%10==0){
                cout<<endl;
            }
        }
    }
    return 0;
}
