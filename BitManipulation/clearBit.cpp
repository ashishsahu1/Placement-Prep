#include <bits/stdc++.h>
using namespace std;

int clearBit(int n,int p){
    return (n&(~(1<<p)));
}

int main()
{
    // code
    int n,p;
    cin>>n;
    cin>>p;

    int n1 = clearBit(n,p);
    cout<<n1<<endl;
    return 0;
}