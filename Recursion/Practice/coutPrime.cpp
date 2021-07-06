#include <bits/stdc++.h>
using namespace std;

bool isPrime(int a){
    for(int i=2;i<=a/2;i++){
        if(a%i==0){
            return false;
        }
    }
    return true;
}

int countPrime(int a,int b,int c){
    if(a>b){
        return c;
    }
    if(isPrime(a)){
        cout<<a<<endl;
        c = 1+countPrime(a+1,b,c);
        }
    else
        c = countPrime(a+1,b,c);
    return c;
}

int main()
{
    // code
    int a,b;
    cin>>a>>b;
    int c=1;
    c = countPrime(a,b,c);
    cout<<"ANs  : "<<c<<endl;
    return 0;
}