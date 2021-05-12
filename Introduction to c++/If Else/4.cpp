#include <iostream>
using namespace std;

int main()
{
    /* code */
    int a;
    cout<<"Enter the number : ";
    cin>>a;
    if(a%5==0)
        if(a%11==0)
            cout<<"Divisible by both 5 and 11\n";
        else    
            cout<<"Divisible by 5 but not by 11\n";
    else    
        cout<<"Divisible by none 5 and 11\n";
    return 0;
}