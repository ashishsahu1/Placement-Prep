#include <bits/stdc++.h>
using namespace std;

void convertBase(int base,int n){
    int rem = n%base;
    if(n==0){
        return;
    }
    convertBase(base,n/base);
    if(rem<10){
        cout<<rem;
    }else{
        cout<<static_cast<char>(rem-10+'A');
    }
}

int main()
{
    // code
    int base;
    cin>>base;
    int n;
    cin>>n;
    string s;
    convertBase(base,n);
    cout<<s<<endl;
    return 0;
}