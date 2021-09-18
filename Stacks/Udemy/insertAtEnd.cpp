#include<bits/stdc++.h>
using namespace std;

//we will be using memory stack for this task
void insertAtBottom(stack<int> &s,int k){
    if(s.empty()){
        s.push(k);
        return;
    }

    int temp = s.top();
    s.pop();
    insertAtBottom(s,k);
    s.push(temp);
}

int main(){

    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    insertAtBottom(s,5); 

    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }  
    return 0;
}