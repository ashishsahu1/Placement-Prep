#include <iostream>
#include <string>
using namespace std;

int main()
{
    /* code */
    int n,b;
    cout<<"Enter the number : ";
    cin>>n;

    cout<<"Enter the base : ";
    cin>>b;
    int n2 = n;
    int c,out;
    string s,cs;

    while(n!=0){
        c = n%b;
        n = n/b;
        cs = to_string(c);
        s = cs+s;
    }
    cout<<s;
    return 0;
}