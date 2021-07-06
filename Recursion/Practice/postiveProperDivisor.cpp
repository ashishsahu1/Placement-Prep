#include <bits/stdc++.h>
using namespace std;

void divi(int n,int d){
    if(d<n){
        if(n%d==0){
        cout<<d<<" ";
        }
    divi(n,d+1);
    }
}

int main()
{
    // code
    int n;
    cin>>n;

    divi(n,1);
    return 0;
}