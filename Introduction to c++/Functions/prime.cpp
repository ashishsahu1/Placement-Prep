#include <iostream>
#include <cmath>
using namespace std;

bool checkPrime(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%2==0)
            return false;
    }
    return true;
}

int main()
{
    /* code */
    int l,r;
    // cout<<"Enter the left range : ";
    // cin>>l;
    // cout<<"ENter the right range : ";
    // cin>>r;
    l=23;
    r=32000;

    for(int i=l;i<=r;i++){
        if(checkPrime(i))
            cout<<i<<"  ";
    }
    return 0;
}