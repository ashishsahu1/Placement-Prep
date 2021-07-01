#include <bits/stdc++.h>
using namespace std;

bool checkPal(string s,int i,int j){
    if(s[i]!=s[j])
        return false;
    checkPal(s,i+1,j-1);
    return true;
}

int main()
{
    string s;
    getline(cin,s);
    bool ans = checkPal(s,0,s.length()-1);
    if(ans)
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}