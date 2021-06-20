#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    int r = b%a;
    if(r==0){
        return a;
    }
    return gcd(r,a);
}

int main()
{
    // code
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b);
    return 0;
}