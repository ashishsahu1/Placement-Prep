#include <bits/stdc++.h>
using namespace std;

int main()
{
    // code
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int s;
    cin>>s;

    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=a[j];
            if(sum==s){
                cout<<"from "<<i+1<<" to "<<j+1<<endl;
            }
            // cout<<i<<" "<<j<<" "<<sum<<endl;
        }
        
    }
    return 0;
}