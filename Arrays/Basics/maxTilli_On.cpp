#include <bits/stdc++.h>
using namespace std;

int main()
{
    // code
    int n=6,arr[n]={1,0,5,4,6,8};
    int mx = INT_MIN;
    int out[n];
    for(int i=0;i<n;i++){
        mx = max(mx,arr[i]);
        out[i] = mx;
    }

    for(int i=0;i<n;i++){
        cout<<out[i]<<" ";
    }
    return 0;
}