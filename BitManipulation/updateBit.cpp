#include <bits/stdc++.h>
using namespace std;

int updateBit(int n,int p,int v){
    int mask = ~(1<<p);
    n = n&mask;

    mask = (1<<p); //p==v
    return (n|mask);

}

int main()
{
    int n,p;
    cin>>n;
    cin>>p;
    // n=5;
    // p=1;
    int val;
    cin>>val;

    cout<<updateBit(n,p,val)<<endl;

    return 0;
}