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
    int c=0,x,k;
    cin>>x;
    cin>>k;
    for(int i=0;i<n;i+=k){
        for(int j=i;j<i+k;j++){
            if(a[j]==x){
                c++;
                break;
            }
        }
    }
    int assum;
    if(n%k==0){
        assum=n/k;
    }
    else{
        assum = (n/k)+1;
    }
    if(c==assum){
        cout<<"Yes "<<assum<<" "<<c;
    }
    else{
        cout<<"No "<<assum<<" "<<c;
    }

    return 0;
}