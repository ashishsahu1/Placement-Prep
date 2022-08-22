#include<bits/stdc++.h>
using namespace std;

void SquareLine(int n,int i){
    //Base case
    if(i==0){
        return;
    }

    //Operation
    cout<<"*";

    //Recursive Relation
    SquareLine(n,i-1);
}

void PrintSquare(int n){
    //Base case
    if(n==0){
        return;
    }

    //Operation
    SquareLine(n,n);
    cout<<endl;

    //Recursive relation
    PrintSquare(n-1);
}

int main(){

    int n;
    // cout<<"Enter the value of n : ";
    cin>>n;
    PrintSquare(n);
    return 0;
}