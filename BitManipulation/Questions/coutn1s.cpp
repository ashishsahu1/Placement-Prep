#include <bits/stdc++.h>
using namespace std;

int count(int n){
    int c=0;
    while(n!=0){
        c++;
        n = n&(n-1);
    }
    return c;
}

int main()
{
    // code
    int n;
    cin>>n;
    int c;
    c = count(n);
    cout<<c;
    return 0;
}