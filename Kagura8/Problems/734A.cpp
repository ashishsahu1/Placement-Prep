#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    string s;
    cin>>n;
    cin>>s;
    int ca=0,cd=0;
    for(int i=0;i<n;i++){
        if(s[i] == 'A')
            ca++;
        if(s[i] == 'D')
            cd++;
    }   
    if(ca>cd)
        cout<<"Anton"<<endl;
    else if(ca<cd)
        cout<<"Danik"<<endl;
    else
        cout<<"Friendship"<<endl;
    return 0;
}