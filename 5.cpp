#include <iostream>
using namespace std;
int main() {
    int test;
    cin>>test;
    if(test < 1 || test > 20) return 1;
    for (int i=0;i<test;i++){
       char arr[10];
       cin>>arr;

       int len=0;
       while(arr[len]!='\0') len++;
       if(len>9) continue;
       if(len >=2 && arr[len-2]=='8' && arr[len-1]=='6'){
        cout<<"1"<<endl;
       }
       else{
        cout<<"0"<<endl;
       }
    }

    return 0;
}
