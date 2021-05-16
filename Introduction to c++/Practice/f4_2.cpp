#include <bits/stdc++.h>
using namespace std;

int convert(int n){
    int ans=0,count=0;
    while(n>0){
        int r = n%10;
        ans = ans+(r*pow(2,count));
        count++;
        n/=10;
    }
    return ans;
}

int main()
{
    // code
    int a,b,ans;
    cin>>a>>b;
    ans = convert(a)+convert(b);
    cout<<convert(ans);
    return 0;
}