#include<bits/stdc++.h>
using namespace std;

bool isBal(string s){
    stack<char> stk;
    for(int i=0;i<s.length();i++){
        if(s[i]=='('){
            stk.push(s[i]);
        }else{
            if(stk.top() == '('){
                stk.pop();
            }else{
                stk.push(s[i]);
            }
        }
    }
    if(stk.empty()){
        return true;
    }else{
        return false;
    }
}

int main(){
    string st = "((()()))";
    if(isBal(st)){
        cout<<"Balanced"<<endl;
    }else{
        cout<<"Not Balanced"<<endl;
    }   
    return 0;
}