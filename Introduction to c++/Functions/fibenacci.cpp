#include <iostream>
using namespace std;

void printFib(int s,int n){
    int n1 = s,n2 = n1+1;
    cout<<n1<<"  ";
    cout<<n2<<"  ";
    while(n2+n1<n){
        cout<<n2+n1<<"  ";
        // for(int i=0;i<(n1+n2);i++){
        //     cout<<"*";
        // }
        int temp = n1; 
        n1 = n2;
        n2 = n2+temp;
        // cout<<endl;
    }

}

int main()
{
    /* code */
    int start,end;
    cout<<"Enter the starting point of fibbonacci : ";
    cin>>start;
    cout<<"Enter the ending point of fibbonacci : ";
    cin>>end;

    printFib(start,end);
    return 0;
}