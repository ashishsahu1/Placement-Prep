#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

class Stack{
    private:
    Node *top;
    public:
    Stack(){
        this->top = NULL;
    }

    void push(int data){
        Node *newnode = new Node(data);
        if(top!=NULL){
            newnode->next = top;
        }
        top = newnode;
    }

    void pop(){
        if(top!=NULL){
            Node *temp = top;
            top = top->next;
            delete temp;
        }else{
            cout<<"stack underflow"<<endl;
        }
    }

    void print(){
        Node * temp = top;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};

int main(){
    Stack s1;
    s1.push(12);
    s1.push(23);
    s1.push(34);
    s1.pop();
    s1.push(56);
    s1.print();
}