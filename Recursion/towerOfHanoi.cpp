#include <bits/stdc++.h>
using namespace std;

/*
n=3
- move 2 disc from a(source) to b(helper) using c(destination)
- move from a(source) to c(destination)
- move 2 disc from b to c using a
*/
int c=0;
void toh(int n,string s,string d,string h){
    if(n>0){
        toh(n-1,s,h,d);
        // cout<<"Move disc from "<<s<<" to "<<d<<endl;
        c++;
        toh(n-1,h,d,s);
    }
}

int main()
{
    // code
    // cout<<"This is a application which solves your Tower of Hanoi problem"<<endl;
    int n;
    cin>>n;
    toh(n,"A","B","C");
    cout<<c;
    return 0;
}