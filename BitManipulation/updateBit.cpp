#include <bits/stdc++.h>
using namespace std;

int clearBit(int n,int p){
    return (n&(~(1<<p)));
}

int setBit(int n,int p){
    return (n | (1<<p));
}

int main()
{
    int n,p;
    // cin>>n;
    // cin>>p;
    n=5;
    p=1;

    cout<<setBit(clearBit(n,p),p)<<endl;

    return 0;
}