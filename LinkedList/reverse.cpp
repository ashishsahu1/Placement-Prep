#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};

class LL{
private:
    Node *head = NULL;
public:
    void display(){
        Node *temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }

    void insert(int val){
        Node *newnode = new Node(val);
        if(head==NULL){
            head = newnode;
        }else{
            newnode->next = head;
            head = newnode;
        }
    }

    void reverse(){
        Node *curr = head;
        Node *prev = NULL;
        Node *nex;
        while(curr!=NULL){
            nex = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nex;
        }
        head = prev;
    }
};

int main()
{
    // code
    LL lst;
    lst.insert(10);
    lst.insert(20);
    lst.insert(30);
    lst.insert(40);
    lst.insert(50);
    lst.display();
    // cout<<endl;
    lst.reverse();
    lst.display();
    return 0;
}