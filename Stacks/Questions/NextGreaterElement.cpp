#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int val){
        data = val;
        next = NULL;
    }
};

class Stack{
    private:
    Node *top = NULL;
    public:
    
    void push(int data){
        Node *newnode = new Node(data);
        if(top==NULL){
            top = newnode;
        }else{
            newnode->next = top;
            top = newnode;
        }
    }
    
    int pop(){
        int x = top->data;
        top = top->next;
        return x;
    }

    void printStack(){
        Node *temp = top;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }

    void isEmpty(){
        cout<<top->data<<endl;
    }

    int getTop(){
        return top->data;
    }
};

int main()
{
    Stack s1;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> ans(n,0);
    s1.push(0);
    for(int i=1;i<n;i++){
        s1.printStack();
        if(arr[i] <= arr[s1.getTop()]){
            s1.push(i);
        }
        while(arr[s1.getTop()] < arr[i]){
            ans[s1.pop()] = arr[i];
        }        
    }

        
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

    return 0;
}