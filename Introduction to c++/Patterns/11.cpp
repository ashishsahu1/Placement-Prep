#include <iostream>
using namespace std;

int main()
{
    /* code */
    int n = 10;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"-";
        }
        for(int j=0;j<n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}