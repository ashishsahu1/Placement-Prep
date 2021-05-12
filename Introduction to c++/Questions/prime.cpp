#include <iostream>
using namespace std;

int main()
{
    int a,c=0;
    cout<<"ENter your number : ";
    cin>>a;
    for (int i = 2; i < a/2; i++)
    {
        if (a%i==0)
        {
            c++;
        }
        
    }
    if (c>0)
    {
        cout<<"This number is not prime \n";
    }
    else{
        cout<<"This number is a prime number \n";
    }
    
    
    return 0;
}