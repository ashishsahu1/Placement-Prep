#include <iostream>
using namespace std;

int fact(int n){
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}

int main()
{
    /* code */
    int n,r;
    cout<<"Enter the n  : ";
    cin>>n;
    cout<<"ENter the r  : ";
    cin>>r;

    float ans = fact(n)/(fact(r)*fact(n-r));

    cout<<"Your required answer is : "<<ans<<endl;
    

    return 0;
}