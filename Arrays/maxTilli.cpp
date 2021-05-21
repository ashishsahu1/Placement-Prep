#include <bits/stdc++.h>
using namespace std;

int main()
{
    // code
    int n=6,arr[n],maxA[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int max = INT_MIN;
        for(int j=0;j<=i;j++){
            if(arr[j]>max){
                max = arr[j];
            }
        }
        maxA[i]=max;
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<maxA[i]<<" ";
    }
    return 0;
}