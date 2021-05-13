#include <iostream>
using namespace std;

float sumN(int n){
    return (n*(n+1))/2;
}

//        n (n + 1)
// sum = -----------
//            2   

int main()
{
    /* code */
    int n;
    cout<<"ENter the n : ";
    cin>>n;

    cout<<sumN(n);
    return 0;
}