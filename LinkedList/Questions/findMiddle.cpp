#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node * next;
    node(int val){
        data = val;
        next = NULL;
    }
};

class LL
{
    private:
    int c=0;
    node *head = NULL;
    
    public:
    void insertNode(int data){
        c++;
        node *newnode = new node(data);
        if(head==NULL){
            head = newnode;
        }else{
            node *temp = head;
            while(temp->next!=NULL){
                temp = temp->next;
            }
            temp->next = newnode;
        }
    }

    int findMid(){
        node *temp = head;
        int mid = c/2;
        while (mid)
        {
            temp = temp->next;
            mid--;
        }
        return temp->data;        
    }

    void print(){
        node *temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};

int main()
{
    LL lst;
    lst.insertNode(20);
    lst.insertNode(30);
    lst.insertNode(40);
    lst.insertNode(50);
    lst.insertNode(60);
    lst.insertNode(70);
    lst.insertNode(80);
    lst.print();
    cout<<lst.findMid()<<endl;
}