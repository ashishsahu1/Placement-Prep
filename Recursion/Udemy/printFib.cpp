#include<bits/stdc++.h>
using namespace std;

void fib(int n,int f1,int f2){
    if(n>0){
        cout<<f1+f2<<endl;
        fib(n-1,f2,f1+f2);
    }
}

int main(){

    int n;
    cin>>n;
    int currFib=0;
    int f1=0,f2=1;
    cout<<f1<<endl<<f2<<endl;
    fib(n-2,f1,f2);
    return 0;
}