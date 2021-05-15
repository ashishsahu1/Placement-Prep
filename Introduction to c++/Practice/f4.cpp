#include <bits/stdc++.h>
using namespace std;

string bin(int n){
    string ans,temp,ch;
    int x=1;

    while(n>0){
        x = n%2;
        ch = to_string(x);
        temp.push_back(ch[0]);
        n = n/2;
    }
    reverse(temp.begin(),temp.end());
    return temp;
}

string binAdd(string s1,string s2){
    string ans;
    int n = max(s1.length(),s2.length());



    return ans;
}
int main()
{
    // code
    int a,b;
    cin>>a;
    cin>>b;
    string bA,bB;
    bA = bin(a);
    bB = bin(b);

    cout<<binAdd(bA,bB);

    return 0;
}