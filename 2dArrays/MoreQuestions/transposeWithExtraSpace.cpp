#include <bits/stdc++.h>
using namespace std;

int main()
{
    // code
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    if(n==m){
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
            }
        }
    }else{
        cout<<"Not a square matrix"<<endl;
    }
    int ans[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                ans[i][j] = arr[i][j];
            }else{
                ans[j][i] = arr[i][j];
            }

        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}