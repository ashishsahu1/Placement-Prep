#include <iostream>
using namespace std;

int fact(int n){
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}

void printPascal(int n){
    for(int i=0;i<n;i++){
        for(int j =0;j<=i;j++){
            float v;
            v = fact(i)/(fact(j)*fact(i-j));
            cout<<v<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    /*
        1
        1 1
        1 2 1
        1 3 3 1
        1 4 6 4 1

        basically, pascals triangle is made up of binomial expansion coefficients
        0c0
        1c0 1c1
        2c0 2c1 2c2
        3c0 3c1 3c2 3c3
        4c0 4c1 4c2 4c3 4c4
    */
    int n;
    cout<<"Enter the value of n : ";
    cin>>n; 
    printPascal(n);


    return 0;
}