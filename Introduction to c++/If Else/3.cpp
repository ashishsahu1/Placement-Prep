#include <iostream>
using namespace std;

int main()
{
    /* code */
    int a;
    cout<<"Enter the number \n";
    cin>>a;
    if(a<0)
        cout<<a<<" is negative\n";
    else if(a>0)
        cout<<a<<" is positive\n";
    else
        cout<<a<<" is zero\n";

    return 0;
}