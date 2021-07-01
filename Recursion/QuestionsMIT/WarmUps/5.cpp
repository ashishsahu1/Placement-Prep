//is subsequence

#include <bits/stdc++.h>
using namespace std;

bool check(string s1,string s2,int i,int j){
    if(j==s2.length()){
        return true;
    }
    if(i<s1.length())
        return check(s1,s2,i+1,(s1[i]==s2[j])?j+1:j);
    return false;
}

//i for s1 and j for s2
bool isSub(string s1,string s2,int n,int m){
    return check(s1,s2,0,0);
}

//s1 is for shorter string
int main()
{
    // code
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);

    if(isSub(s1,s2,s1.length(),s2.length()))
        cout<<"Yes";
    else
        cout<<"No";

    return 0;
}
