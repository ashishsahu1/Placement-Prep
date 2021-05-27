#include <bits/stdc++.h>
using namespace std;

int main()
{
    // code
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int key;
    cin>>key;
    int mid;
    for(int i=0;i<m;i++){
        if(arr[0][i]<key){
            mid = i;
        }
    }
    // cout<<mid<<endl;
    for(int i=0;i<n;i++){
        if(arr[i][mid]<key){
            continue;
        }
        else if(arr[i][mid]==key){
            cout<<"Found at arr["<<i<<"]["<<mid<<"]"<<endl;
        }
        else if(arr[i][mid]>key){
            mid--;
        }
        cout<<mid<<endl;
    }
    return 0;
}