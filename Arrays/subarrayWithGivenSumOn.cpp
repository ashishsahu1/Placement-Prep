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
    int i=0,j=0,st = -1,en = -1,sum=0;
    while(j<n && sum+a[j]<=s){
        sum+=a[j];
        j++;
    }
    if(sum==s){
        cout<<"from "<<i+1<<" "<<"to "<<j;
    }

    while(j<n){
        sum
    }
    cout<<"from "<<st+1<<" "<<"to "<<en+1;
    return 0;
}