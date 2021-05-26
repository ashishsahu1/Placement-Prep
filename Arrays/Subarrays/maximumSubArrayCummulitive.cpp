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
    int cumm[n+1];
    cumm[0]=0;
    for(int i=1;i<=n;i++){
        cumm[i] = cumm[i-1]+arr[i-1];
    }

    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" "<<cumm[i]<<endl;
    // }
    
    
    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=i;j<n;j++){
            sum = cumm[i]-cumm[j];
            cout<<sum<<endl;
        }

    }

    // cout<<sum;
    return 0;
}