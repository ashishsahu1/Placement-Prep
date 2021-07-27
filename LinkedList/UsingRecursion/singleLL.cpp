#include <bits/stdc++.h>
using namespace std;

class Node{
    public:

    int data;
    Node * next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class singleLL{
    private:
    Node * head = NULL;

    public:
    void display(Node *head){
        if(head == NULL){
            return;
        }
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    void insert(int val){

    }
};

int main()
{
    // code
    return 0;
}