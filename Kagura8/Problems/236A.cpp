#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin>>s;
    vector<bool> flag(26,0);
    for(int i=0;i<s.length();i++){
        flag[s[i]-'a'] = 1;
    }
    int c=0;
    for(int i=0;i<26;i++){
        if(flag[i])
            c++;
    }

    if(c%2!=0)
        cout<<"IGNORE HIM!"<<endl;
    else
        cout<<"CHAT WITH HER!"<<endl;

    return 0;
}