#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    int cap=0,sm=0,nmbr =0;
    getline(cin,s); 
    for(int i=0;i<s.length();i++){
        if(s[i]>'A' && s[i]<'Z')
            cap++;
        else if(s[i]>'a' && s[i]<'z')
            sm++;
        else if(s[i]>'1' && s[i]<'9')
            nmbr++;
    }  

    cout<<"Numer : "<<nmbr<<endl<<"Capitals : "<<cap<<endl<<"Small : "<<sm<<endl;

    return 0;
}