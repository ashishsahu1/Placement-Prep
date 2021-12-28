// print fibonacci series till n

#include<bits/stdc++.h>
using namespace std;

int fn(int n){
    //base condition
    if(n==0 || n==1)
        return n;

    //recursive condition
    return fn(n-1)+fn(n-2);
}

int main(){

    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<fn(i)<<" ";
    }
    cout<<endl;
    return 0;
}