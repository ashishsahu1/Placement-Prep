#include <bits/stdc++.h>
using namespace std;

int main()
{
    // code
    int n,m;
    cin>>n;  //row size
    cin>>m;  //columns size

    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}