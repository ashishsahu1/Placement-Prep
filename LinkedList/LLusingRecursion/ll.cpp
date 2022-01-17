#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int data)
    {
        this->val = data;
        next = NULL;
    }
};

//using iteration
void trav(Node *head){
    if(head == NULL){
        cout<<"Empty LL"<<endl;
    }
    while(head!=NULL){
        cout<<head->val<<" ";
        head = head->next;
    }
    cout<<endl;
}

//using recursion
void travRR(Node *head){
    //base condition
    if(head == NULL){
        return;
    }
    //recursive condition
    travRR(head->next);
    cout<<head->val<<" ";
}

int main()
{
    Node *head = NULL;
    Node *first = new Node(10);
    head = first;
    Node *sec = new Node(20);
    first->next = sec;
    Node *third = new Node(30);
    sec->next = third;
    Node *fourth = new Node(40);
    third->next = fourth;
    Node *fifth = new Node(50);
    fourth->next = fifth;

    trav(head);
    travRR(head);
    return 0;
}