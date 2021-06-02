#include <bits/stdc++.h>
using namespace std;

int getBit(int n,int p){
    if((n&(1<<p))==0){
        return 0;
    }
    else{
        return 1;
    }
}

int main()
{
    // code
    int n;
    cin>>n;

    int p;
    cin>>p;

    cout<<getBit(n,p)<<endl;

    // cout<<(n&(1<<p))<<endl;
    return 0;
}