#include <bits/stdc++.h>
using namespace std;

void rev2(string s,int n){
    if(n==0){
        return;
    }

    rev2(s.substr(1,n),n-1); 
    cout<<s[0];
}

void rev(string s,int n){
    if(n==0){
        return;
    }
    cout<<s[n-1];
    rev(s.substr(0,n-1),n-1); 
}

int main()
{
    // code
    string s;
    getline(cin,s);
    int n= s.length();
    rev(s,s.length());
    cout<<endl;
    rev2(s,s.length());
    // cout<<n<<" ";
    // cout<<s.substr(0,n-1);
    return 0;
}