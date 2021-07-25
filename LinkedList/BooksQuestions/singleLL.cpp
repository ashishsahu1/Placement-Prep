#include<bits/stdc++.h>
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

class singleLL{
    private:
    Node *head = NULL;
    public:
    singleLL(int data){
        Node * newnode = new Node(data);
        head = newnode;
    }

    void display(){
        Node *temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }

    int count(){
        int c=0;
        Node *temp = head;
        while(temp!=NULL){
            c++;
        }
        return c;
    }

    int search(int x){
        int c=0;
        Node *temp = head;
        while(temp!=NULL){
            c++;
            if(temp->data == x){
                return c; 
            }
        }
        return -1;
    }

    void insertAtBeg(int val){
        Node *newnode = new Node(val);
        if(head==NULL){
            cout<<"No linkedlist found"<<endl;
            return;
        }else{
            newnode->next = head;
            head = newnode;
        }
    }

    void insertAtEnd(int val){
        Node *newnode = new Node(val);
        if(head==NULL){
            cout<<"No linkedlist found"<<endl;
            return;
        }else{
            Node *temp = head;
            while(temp->next!=NULL){
                temp = temp->next;
            }
            temp->next = newnode;
        }
    }

    void insertAtMid(int val,int pos){
        Node *newnode = new Node(val);
        if(head==NULL){
            cout<<"No linkedlist found"<<endl;
            return;
        }else{
            Node *temp = head;
            while(pos){
                temp = temp->next;
                pos--;
            }
            temp->next = newnode;
        }
    }
};

int main(){
    while(1){
        int c;
        cout<<"1. Create a LL"<<endl;
        cout<<"2. Display"<<endl;
        cout<<"3. Count"<<endl;
        cout<<"4. Search"<<endl;
        cout<<"5. Add at beginning"<<endl;
        cout<<"6. Add at end"<<endl;
        cout<<"7. Add in mid"<<endl;
        cout<<"8. Delete at beginning"<<endl;
        cout<<"9. Delete at end"<<endl;
        cout<<"10. Reverse"<<endl;
        cout<<endl;
        cout<<" ENTER YOUR CHOICE : "<<endl;
        cin>>c;

        switch(c){
            case 1:
                {int x;
                cout<<"Enter the first value : ";
                cin>>x;
                singleLL l1 = singleLL(x);
                break;}

            case 2:
                l1.display();
                break;

            case 3:
                cout<<l1.count()<<endl;
                break;

            case 4:
                int y;
                cout<<"Enter the value to search : ";
                cin>>y;
                cout<<"The required element is at "+l1.search(y)<<endl;
                break;

            case 5:
                int z;
                cout<<"Enter the value : ";
                cin>>z;
                l1.insertAtBeg(z);
                break;

            case 6:
                int a;
                cout<<"Enter the value : ";
                cin>>a;
                l1.insertAtEnd(a);
                break;

            case 7:
                int b,pos;
                cout<<"Enter the value : ";
                cin>>b;
                cout<<"Enter the position to insert : ";
                cin>>pos;
                l1.insertAtMid(b,pos);
                break;

            // default:
            //     exit(1);
        }
    }
}