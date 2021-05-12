#include <iostream>
using namespace std;

int main()
{
    /* code */
    int l,r;
    cout<<"Enter the left range : ";
    cin>>l;
    cout<<"Enter the right range : ";
    cin>>r;
    for(int i=l;i<=r;i++)
    {
        if(i%2!=0)
            cout<<i<<"\t";
    }
    return 0;
}