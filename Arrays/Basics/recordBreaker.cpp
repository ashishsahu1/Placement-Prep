#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int ans=0;
        for(int i=0;i<n;i++){
            int count = 0;
            for(int j=i-1;j>=0;j--){
                if(arr[i]>arr[j]){
                    count++;
                }
            }           
            if(i==count && arr[i]>arr[i+1]){
                ans++;
            }
            if(i==count && i==n-1){
                ans++;
            }
        }
        cout<<ans<<endl;
        t--;
    }
    return 0;
}