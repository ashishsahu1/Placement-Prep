#include <bits/stdc++.h>
using namespace std;

double neg(double a,double b){
    if(b==1){
        return (1/a);
    }
    return (1/a)*neg(a,b-1);
}

int main()
{
    // code
    double a,b;
    cin>>a>>b;

    cout<<neg(a,b);
    return 0;
}