#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n,c=0;
    cout<<"Enter the number :";
    cin>>n;
    while(n!=0){
        // n = n%10;
        n/=10;
        c++;
    }

    // c = log10(n)+1;
    cout<<"No of digits: "<<c<<endl;
    return 0;
}