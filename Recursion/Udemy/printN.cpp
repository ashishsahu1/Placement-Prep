#include<iostream>
using namespace std;

void printN(int n){
    if(n==0){
        return;
    }
    cout<<"Hello this is "<<n<<endl;
    printN(n-1);
}

int main(){
    int n;
    cin>>n;
    printN(n);
}