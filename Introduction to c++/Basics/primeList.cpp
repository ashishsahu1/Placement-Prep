#include <iostream>
using namespace std;

int main()
{
    int l,r,c;
    cout<<"Enter the left range : ";
    cin>>l;
    cout<<"Enter the right range : ";
    cin>>r;

    for (int i = l; i <= r; i++)
    {
        c=0;
        for(int j=2;j <= i/2; j++){
            if(i%j==0){
                c++;
            }
        }
        if(c==0){
            cout<<i<<"\t";
        }
    }
    
    return 0;
}