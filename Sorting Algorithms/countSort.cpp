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
    int maxA = INT_MIN;
    for(int i=0;i<n;i++){
        maxA = max(maxA,arr[i]);
    }
    int count[maxA+1] = {0};
    for(int i=0;i<=n;i++){
        count[arr[i]]+=1;
    }
    for(int i=0;i<=maxA;i++){
        if(i==1){
            cout<<i<<" ";
        }else{
            while(count[i]){
                cout<<i<<" ";
                count[i]--;
            }
        }
    }

    return 0;
}