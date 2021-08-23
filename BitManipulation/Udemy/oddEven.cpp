#include<iostream>
using namespace std;

string checkEven(int n){
    int x = n & 1 ;
    if(x){
        return "Odd";
    }else{
        return "Even";
    }
}

int main(){
    int n;
    cin>>n;
    cout<<checkEven(n)<<endl;
}