#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int c=t;
    while(t){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int ans=0;
        int mx = INT_MIN;
        
        for(int i=0;i<n;i++){
            if(mx<arr[i] && (arr[i]>arr[i+1] || i == n-1)){
                ans++;
            }
            if(arr[i]>mx){
                mx = arr[i];
            }
        }

        cout<<"Case #"<<c-t+1<<": "<<ans<<endl;
        t--;
    }
    return 0;
}