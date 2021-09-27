#include<iostream>
using namespace std;

void printN(int n){
    if(n==6){
        return;
    }
    cout<<"Hello this is "<<n<<endl;
    printN(n+1);
}

void printN2(int n,int i){

    cout << "Hello this is " << i << endl;
    //base condition
    if(i==n){
        return;
    }

    //recursion call
    printN2(n,i+1);
}

void printN3(int n)
{
    //base condition
    if (n==0)
    {
        return;
    }

    cout << "Hello this is " << n << endl;
    //recursion call
    printN3(n - 1);
    cout << "hi this is " << n << endl;
}

int main(){
    int n;
    cin>>n;
    printN3(n);
}