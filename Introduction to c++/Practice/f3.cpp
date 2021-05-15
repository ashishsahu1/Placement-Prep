#include <bits/stdc++.h>
using namespace std;

int main()
{
    // code
    int n,c=0,x,ans=0;
    cin>>n;
    while(n!=0){
        x = n%10;
        ans = ans+(x*(pow(8,c)));
        n = n/10;
        c++;
    }

    cout<<ans;
    return 0;
}