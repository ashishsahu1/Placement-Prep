#include <iostream>
using namespace std;

int main()
{
    /* code */
    int n =5;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<". ";
        }
        for(int j=i+1;j>>0;j--){
            cout<<j<<" ";
        }
        for(int j=2;j<=i+1;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}