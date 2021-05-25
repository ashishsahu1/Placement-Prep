#include <bits/stdc++.h>
using namespace std;

int main()
{
    // code
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    int nMax = 1e6+2;
    // cout<<nMax;
    bool check[nMax];

    for(int i=0;i<nMax;i++){
        check[i]=false;
    }

    for(int i=0;i<n;i++){
        if(arr[i]>=0 && check[arr[i]]==false){
            check[arr[i]]=true;
        }
    }
    int ans = -1;

    for(int i=0;i<nMax;i++){
        if(check[i]==false){
            ans = i;
            break;
        }
    }

    cout<<ans;
    return 0;
}