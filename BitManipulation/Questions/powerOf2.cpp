#include <bits/stdc++.h>
using namespace std;

void checkOn(int n){
    int x;

    while(n>1){
        x = n;
        n = n>>1;
    }

    if(x==2){
        cout<<"Power of two"<<endl;
    }else{
        cout<<"Not power of two"<<endl;
    }
}

void checkOptimised(int n){
    if((n & (n-1))==0){
        cout<<"Power of Two"<<endl;
    }else{
        cout<<"Not power of two"<<endl;
    }
}

int main()
{
    // code
    int n;
    cin>>n;

    checkOn(n);
    checkOptimised(n);
    
    return 0;
}