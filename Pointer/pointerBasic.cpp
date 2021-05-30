#include <bits/stdc++.h>
using namespace std;

int main()
{
    // code
    int a;
    cin>>a;
    cout<<"Original values : "<<a<<" "<<&a<<endl;
    //now pointer starts

    int *ptr;
    ptr = &a;
    cout<<"Accessing with pointer : "<<ptr<<" "<<*ptr<<endl;

    *ptr = 20;
    cout<<"Changed Value : "<<a<<" "<<&a<<endl; 

    return 0;
}