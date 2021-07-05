#include <bits/stdc++.h>
using namespace std;

int sumOfDigit(int n){
    if(log10(n)+1==1){
        return n;
    }
    return (n%10)+sumOfDigit(n/10);
}

int main()
{
    // code
    int n;
    cin>>n;
    cout<<sumOfDigit(n)<<endl;
    return 0;
}