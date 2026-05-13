#include <iostream>
using namespace std;
int arr[100][100];
int ans[100][100][100];
int rows[100],cols[100];
int main() {
    int T,N,M;
    cin>>T;
    for(int t=0;t<T;t++){
        cin>>N>>M;
        rows[t]=N;
        cols[t]=M;
        int row[100]={0};
        int col[100]={0};
        for(int i=0;i<N;i++){
            for(int j=0;j<M;j++){
                cin>>arr[i][j];
                if(arr[i][j]==1){
                    row[i]=1;
                    col[j]=1;
                }

            }
        }
        for(int i=0;i<N;i++){
            for(int j=0;j<M;j++){
                if(row[i]==1 || col[j]==1){
                    ans[t][i][j]=1;
                }
                else{
                    ans[t][i][j]=arr[i][j];
                }
            }
        }
    }

    for(int t=0;t<T;t++){
        for(int i=0;i<rows[t];i++){
            for(int j=0;j<cols[t];j++){
                cout<<ans[t][i][j]<<" ";
            }
            cout<<endl;
        }
    }
    
    return 0;
}
