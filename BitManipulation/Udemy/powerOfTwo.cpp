#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    if(n&(n-1)){
        cout<<"not POWER OF TWO"<<endl;
    }   
    else{
        cout<<"power opf two"<<endl;
    }
    return 0;


}