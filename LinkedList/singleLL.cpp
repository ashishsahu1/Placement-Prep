#include<bits/stdc++.h>
using namespace std;
//Linkedlist internal structure
class Node{
    public:
    int data;
    Node *next;

    Node(int data){
        this->data = data;
        next = NULL;
    }
};

class singleLL{
    Node * head = NULL;
    public:
    //insertions
    void insertAtBeg(int val){
        Node *temp = new Node(val);
        if(head==NULL){
            head = temp;
        }else{
            temp->next = head;
            head = temp;
        }
    }

    void insertAtENd(int val){
        Node *newnode = new Node(val);
        Node *temp = head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = newnode;
    }

    void insertAtMid(int pos,int val){
        Node *newnode = new Node(val);
        Node* temp = head;
        while(pos-2){
            temp = temp->next;
            pos--;
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }
    
    void deleteAtBeg(){
        Node *temp = head;
        head = head->next;
        free(temp);
    }

    void deleteAtEnd(){
        Node *temp = head;
        while(temp->next->next!=NULL){
            temp = temp->next;
        }
        temp->next = NULL;
    }

    void deleteAtMid(int pos){
        Node *temp = head;
        while(pos){
            temp = temp->next;
        }
        temp->next = temp->next->next;
    }

    void printLL(){
        Node *temp = head;
        if(head ==NULL){
            cout<<"List is empty"<<endl;
        }
        else{
            while(temp!=NULL){
                cout<<temp->data<<" ";
                temp = temp->next;
            }   
        cout<<endl;
        }
    }
};

int main(){
    singleLL lst;
    
}