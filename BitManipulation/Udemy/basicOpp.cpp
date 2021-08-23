#include<iostream>
using namespace std;

int getI(int n,int i){
    int mask = 1<<i;
    return (n&mask)>0?1:0;
}

int clearIbit(int n,int i){
    int mask = ~(1<<i);
    return n&mask;
}

int setBit(int n,int i){
    int mask = 1<<i;
    return n|mask;
}

int clearalllastI(int n,int i){
    int mask = (~0)<<i;
    return n&mask;
}

int main(){
    int n;
    cin>>n;
    int i;
    cin>>i;
    cout<<getI(n,i)<<endl;
    cout<<clearIbit(n,i)<<endl;
    cout<<setBit(n,i)<<endl;
    cout<<clearalllastI(n,i)<<endl;
}