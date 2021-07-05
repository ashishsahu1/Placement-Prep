#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    if(a%b==0){
        return b;
    }
    int r = a%b;
    return gcd(b,r);
}

int main()
{
    // code
    //12 16 : 16/12 = q =1 and r =4
    //12/4.....
    int a,b;
    cin>>a>>b;
    cout<<gcd(max(a,b),min(a,b));
    return 0;
}