#include <bits/stdc++.h>
using namespace std;

void revWord(string st){
    for(int i=0;i<st.size();i++){
        if(st[i]==' '){
            cout<<"* ";
        }
    }
}

int main()
{   
    // code
    string st;
    getline(cin,st);
    revWord(st);
    return 0;
}