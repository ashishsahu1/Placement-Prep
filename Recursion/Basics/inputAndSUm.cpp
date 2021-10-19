#include<bits/stdc++.h>
using namespace std;

int sumN(int n){

    //base condition
    if(n==0){
        return 0;
    }
    
    int x;
    cin>>x;

    //recursive condition
    return sumN(n-1)+x;
}

void print(int n){
    //base condition
    if(n==0){
        return;
    }

    cout<<"Hello World "<<n<<endl;
    //recursive condition
    print(n-1);
    
}

int main(){

    int n;
    cin>>n;

    int sum = sumN(n);
    cout<<sum<<endl;

    // print(5);
    return 0;
}