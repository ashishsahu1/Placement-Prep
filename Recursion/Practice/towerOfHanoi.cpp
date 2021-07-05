#include <bits/stdc++.h>
using namespace std;

int c=0;

//s: source    d: destination    h:helper
void toh(int n,string s,string d,string h){
    if(n>0){
        //taking disc from {source} to {helper} using {destination}
        toh(n-1,s,h,d);
        //printing the statement telling that disc is moved from {source} to {destination}
        cout<<"Move disc from"<<s<<" to "<<d<<endl;
        c++;
        //taking disc from {helper} to {destination} using {source}
        toh(n-1,h,d,s);
    }
}

int main()
{
    // code
    int n;
    cin>>n;
    toh(n,"A","B","C");
    cout<<c;
    return 0;
}