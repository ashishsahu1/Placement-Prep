#include <iostream>
using namespace std;

int main()
{
    /* code */
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<"Number to be reversed : "<<n<<endl;
    int nRev=0;
    while(n!=0){
        nRev = (nRev*10)+n%10;
        n = n/10;
    }
    cout<<"Number after reversed : "<<nRev<<endl;
    return 0;
}