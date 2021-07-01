//sum of the digits

#include <bits/stdc++.h>
using namespace std;
//
int sumF(int n,int sum){
    if(n<=0){
        return sum; 
    }
    return sumF(n/10,sum+(n%10));
}

int main()
{
    // code
    int n;
    cin>>n;
    cout<<sumF(n,0);
    return 0;
}