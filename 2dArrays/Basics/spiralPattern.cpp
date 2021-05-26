#include <bits/stdc++.h>
using namespace std;
const int high = 100;

void spiralPrint(int arr[][4],int n,int m){
    int t=0,b=n-1,l=0,r=m-1;
    int dir = 0;
    while(t<=b && l<=r){
        if(dir==0){
            for(int i=l;i<=r;i++){
                cout<<arr[t][i]<<" "; 
            }
            t--;
            dir = 1;
        }
        else if(dir==1){
            for(int i=t;i<=b;t++){
                cout<<arr[i][r]<<" ";
            }
            r--;
            dir = 2;
        }
        else if(dir==2){
            for(int i=r;i>=l;i--){
                cout<<arr[b][i]<<" ";
            }
            b--;
            dir = 3;
        }
        else if(dir==3){
            for(int i=b;i>=t;i--){
                cout<<arr[i][l]<<" ";
            }
            l--;
            dir = 0;
        }
    }

}


void Print(int arr[100][100],int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    // code
    int n = 3,m =4;
    cin>>n;  //row size
    cin>>m;  //columns size

    int arr[n][4];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    spiralPrint(arr,n,m);

    return 0;
}