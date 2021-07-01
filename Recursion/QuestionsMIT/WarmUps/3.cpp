//reverse a string
#include <bits/stdc++.h>
using namespace std;

void rev(string s)
{
    if(s.length()==0){
        return;
    }
    rev(s.substr(1,s.length()-1));
    cout<<s[0];
}

int main()
{
    // code
    string s;
    getline(cin,s);
    rev(s);
    return 0;
}