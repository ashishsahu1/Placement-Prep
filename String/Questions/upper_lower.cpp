#include <bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    // code
    string s;
    getline(cin,s);

    for(int i=0;i<s.length();i++){
        if((int)s[i]>=65 && (int)s[i]<91){
            s[i] = s[i]+32;
        }
    }
    cout<<s<<endl;
    return 0;
}