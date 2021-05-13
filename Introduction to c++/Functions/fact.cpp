#include <iostream>
using namespace std;

int printFactrec(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*printFactrec(n-1);
    }
}

void printFac(int n){
    int fac=1;
    for(int i =1;i<=n;i++){
        fac = fac*i;
    }
    cout<<fac;
}

int main()
{
    /* code */
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    int fac = printFactrec(n);
    cout<<fac<<"  ";
    printFac(n);
    return 0;
}