#include<bits/stdc++.h>
using namespace std;

int countSet(int n){
    int c=0;
    while(n){
        if(n&1)
            c++;
        n = n>>1;
    }
    return c;
}

//faster method
/*
    n = n&(n-1)
    this above statement basically removes the last set bit of the number

*/
int coutnSet2(int n){
    int c=0;
    while(n){
        n = n&(n-1);
        c++;
    }
    return c;
}

int main(){

    int n;
    cin>>n;
    cout<<countSet(n)<<endl;
    cout<<coutnSet2(n)<<endl;
    return 0;
}