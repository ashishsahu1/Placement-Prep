#include <bits/stdc++.h>
using namespace std;

int main()
{
    // code

    int a,b=20;
    cin>>a;
    int *ptr;
    ptr = &a;
    int *ptr2;
    ptr2 = &b;

    cout<<"Increment : "<<ptr++<<endl;
    cout<<"Decrement : "<<ptr2--<<endl;
    cout<<"Addition : "<<*ptr+*ptr2<<endl;
    cout<<"Subtraction : "<<*ptr-*ptr2<<endl;
    return 0;
}