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

};

int main(){
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
            int x;
            cout<<"Enter the first value : ";
            cin>>x;
            singleLL(x);
            break;
    }

}