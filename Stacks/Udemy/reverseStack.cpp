#include<bits/stdc++.h>
using namespace std;

void insertAtBot(stack<int> &s,int k){
    if(s.empty()){
        s.push(k);
        return;
    }

    int temp = s.top();
    s.pop();
    insertAtBot(s,k);
    s.push(temp);
}

void reverseStack(stack<int> &s){
    if(s.empty()){
        return;
    }

    int temp = s.top();
    s.pop();
    reverseStack(s);
    insertAtBot(s,temp);
}


int main(){

    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    reverseStack(s);

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    return 0;
}