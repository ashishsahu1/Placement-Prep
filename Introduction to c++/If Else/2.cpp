#include <iostream>
using namespace std;

int main()
{
    /* code */
    int a,b,c,max;
    cout<<"ENter the first number : ";
    cin>>a;
    cout<<"Enter the second number : ";
    cin>>b;
    cout<<"Enter the third number : ";
    cin>>c;

    if(a>b){
        if(a>c){
            max = a;
        }
        else{
            max = c;
        }
    }
    else{
        if(b>c){
            max = b;
        }else{
            max = c;
        }
    }

    cout<<"Maximum of the three is "<<max;

    return 0;
}