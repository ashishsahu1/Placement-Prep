#include <bits/stdc++.h>
using namespace std;

void rev(string s){
    if(s.length()==0){
        return;
    }

    string restString = s.substr(1);
    rev(restString);
    cout<<s[0];
}

int main()
{
    // code
    string st;
    getline(cin,st);
    rev(st);
    return 0;
}