#include <iostream>
using namespace std;

int main()
{
    /* Buterfly pattern */
    int n=40;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"O ";
        }
        for(int k=n-i-1;k>0;k--){
            cout<<". ";
        }
        for(int l=n-i-1;l>0;l--){
            cout<<". ";            
        }
        for(int m=0;m<=i;m++){
            cout<<"O ";
        }
        cout<<endl;
    }

    for(int i=0;i<n;i++){
        for(int j=n;j>i;j--){
            cout<<"O ";
        }
        for(int k=0;k<i;k++){
            cout<<". ";
        }
        for(int l=0;l<i;l++){
            cout<<". ";
        }
        for(int m=n;m>i;m--){
            cout<<"O ";
        }
        cout<<endl;
    }
    return 0;
}