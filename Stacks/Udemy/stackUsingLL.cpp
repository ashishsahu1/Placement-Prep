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

class List{
    private:
    Node *head;
    int size;

    public:
    List(){
        this->size = 0;
    }

    void insert(int data){
        Node *newnode = new Node(data);
        if(head!=NULL){
            newnode->next = head;
        }
        head = newnode;
    }

    void del(){
        Node *temp = head;
        if(head==NULL)
            return;
        head = head->next;
        delete temp;
    }

    void print(){
        Node *temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }

};

class Stack{
    private:
    Node* top;
    int size;
    List st;

    public:
    Stack(){
        this->top = NULL;
    }

    void push(int data){
        st.insert(data);
    }

    void pop(){
        st.del();
    }

    void print(){
        st.print();
    }
};

int main(){
    Stack s1;
    s1.push(12);
    s1.push(23);
    s1.push(34);
    // s1.pop();
    // s1.push(56);
    s1.print();
}