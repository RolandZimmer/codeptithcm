#include <iostream>
using namespace std;
#include<vector>
int main(){
    int T;
    cin>>T;
    vector< long long > numbers(T);
    if(T>=1 && T<=100){
    for(int i=0;i<T;i++){
        cin>>numbers[i];
    }
   }
   for(int t=0;t< T;t++){
    long long N=numbers[t];
    long long temp=N;
    for(long long i=2;i*i<temp;i++){
        while(temp%i==0){
            cout<<i<<" ";
            temp=temp/i;
        }
    }
    if(temp>1) cout<<temp;
    cout<<endl;
   }

    return 0;
}
