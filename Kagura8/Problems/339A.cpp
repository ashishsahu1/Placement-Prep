#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin>>s;
    string s2;
    int n1=0,n2=0,n3=0;
    for(int i=0;i<s.length();i++){
        if(s[i] == '1')
            n1++;
        else if(s[i] == '2')
            n2++;
        else if(s[i] == '3')
            n3++;
    }
    for(int i=0;i<n1;i++)
        s2+="1+";
    
    for (int i = 0; i < n2; i++)
        s2 += "2+";
    
    for (int i = 0; i < n3; i++)
        s2 += "3+";

    for(int i=0;i<s2.length()-1;i++){
        cout<<s2[i];
    }
    cout<<endl;
    return 0;
}