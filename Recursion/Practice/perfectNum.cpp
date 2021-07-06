#include <bits/stdc++.h>
using namespace std;

void fact(int n,int d,int *sum){
    if(d<n){
        if(n%d==0){
            *sum+=d;
        }
        // cout<<n<<" "<<d<<" "<<*sum<<endl;
        fact(n,d+1,sum);
    }
}

int main()
{
    // code
    int n;
    cin>>n;
    int sum=0;
    fact(n,1,&sum);
    cout<<sum<<endl;
    if(sum==n){
        cout<<"Perfect Number"<<endl;
    }else{
        cout<<"Not perfect Number"<<endl;
    }
    return 0;
}